
[tocstart]: # (toc start)

  * [U8g2 Font Format](#u8g2-font-format)
    * [Font header](#font-header)
    * [Glyph data](#glyph-data)
    * [Glyph bitmaps](#glyph-bitmaps)
    * [Pitches and distances](#pitches-and-distances)
    * [Font Decoder](#font-decoder)

[tocend]: # (toc end)

# U8g2 Font Format


The data format of U8G2 fonts is based on the BDF font format. Its glyph bitmaps are compressed
with a run-length-encoding algorithm and its header data are designed with variable bit field width to minimize flash memory footprint.


<table>
<tr>
    <th colspan =3>Font Header</th>
</tr>    
<tr>
    <th >Offset (Byte)</th><th >Size</th><th >Content</th>
</tr>

<tr>
    <td>0. </td><td> 1 Byte </td><td> Number of glyphs  </td>

</tr>
<tr><td>        1. </td><td> 1 Byte </td><td> Bounding Box Mode (not relevant for decoding) </td></tr>
<tr></tr>
<tr><td>        2. </td><td> 1 Byte </td><td> <i>m<sub>0</sub></i> Bit width of Zero-Bit run-length encoding in bitmap</td></tr>
<tr><td>        3. </td><td> 1 Byte </td><td> <i>m<sub>1</sub></i> Bit width of One-Bit run-length encoding in bitmap</td></tr>
<tr><td>        4. </td><td> 1 Byte </td><td> Bit width of glyph bitmap width (bitcntW) </td></tr>
<tr><td>        5. </td><td> 1 Byte </td><td> Bit width of glyph bitmap height (bitcntH) </td></tr>
<tr><td>        6. </td><td> 1 Byte </td><td> Bit width of glyph bitmap <i>x</i> offset (bitcntX)</td></tr>
<tr><td>        7. </td><td> 1 Byte </td><td> Bit width of glyph bitmap <i>y</i> offset (bitcntY) </td></tr>
<tr><td>        8. </td><td> 1 Byte </td><td> Bit width of glyph character pitch, delta to next glyph (bitcntD)</td></tr>
<tr></tr>
<tr><td>        9. </td><td> 1 Byte </td><td> Font Bounding Box width</td></tr>      
<tr><td>       10. </td><td> 1 Byte </td><td> Font Bounding Box height</td></tr>    
<tr><td>       11. </td><td> 1 Byte </td><td> Font Bounding Box <i>x</i> Offset</td></tr>      
<tr><td>       12. </td><td> 1 Byte </td><td> Font Bounding Box <i>y</i> Offset</td></tr>      
<tr></tr>
<tr><td>       13. </td><td> 1 Byte </td><td> Ascent (size above baseline) of letter "A"
<tr><td>       14. </td><td> 1 Byte </td><td> Descent (size below baseline) of letter "g"</td></tr>
<tr><td>       15. </td><td> 1 Byte </td><td> Ascent of "("</td></tr>
<tr><td>       16. </td><td> 1 Byte </td><td> Descent of "("</td></tr>
<tr></tr>
<tr><td>    17+18. </td><td> 2 Bytes </td><td> Array offset of glyph "A"</td></tr>  
<tr><td>    19+20. </td><td> 2 Bytes </td><td> Array offset of glyph "a"</td></tr>  
<tr><td>    21+22. </td><td> 2 Bytes </td><td> Array offset of glyph 0x0100</td></tr>
<tr></tr>
</table>
    

<table>
<tr>
    <td colspan =3></td>
</tr>    
<tr>
    <th colspan =3>Glyph (variable length)</th>
</tr>    
<tr>
    <th >Offset</th><th >Size</th><th >Content</th>
</tr>
<tr></tr>
<tr><td>        0. </td><td> 1/2 Byte(s) </td><td> Unicode of character/glyph</td></tr>
<tr><td>      	1. (+1)</td><td> 1 Byte </td><td> jump offset to next glyph</td></tr>
<tr></tr>
<tr><td>                </td><td> bitcntW </td><td> glyph bitmap width (variable width)</td></tr>
<tr><td>                </td><td> bitcntH </td><td> glyph bitmap height (variable width)</td></tr>
<tr><td>                </td><td> bitcntX </td><td> glyph bitmap <i>x</i> offset (variable width)</td></tr>
<tr><td>                </td><td> bitcntY </td><td> glyph bitmap <i>y</i> offset (variable width)</td></tr>
<tr><td>                </td><td> bitcntD </td><td> character pitch (variable width)</td></tr>
<tr></tr>
<tr><td>                </td><td> <i>n</i> Bytes </td><td> Bitmap (horizontal, RLE)</td></tr>  
<tr></tr>
</table>


## Font header
The font header (see table above) is always 23 Bytes long. It contains decoding
parameters for the glyph bitmap data, font outline data, such as overall font bounding box 
dimensions, and index offsets for frequently used character ranges.

## Glyph data

### Unicode below 0x0100

The glyphs start immediately after the end of the initial data structure.
All glyphs start with the unicode (1 byte) and the offset to the next glyph (1 byte).
The offset is relative to the start of the glyph, e.g., if `data[off]` has the code point then `data[off+1]` has
the offset to the next glyph, which is at `data[off+data[off+1]]`.

For the most important code range from 32...255 (decimal), array offsets of important glyphs ('A', 'a', and 0x100) are provided by the font header to minimize search overhead. The offsets are relative to the end of the font header.

### Unicode above 0x0100

The address for the unicode glyphs is the end of the initial data structure plus the 16 bit offset from bytes 21/22 of the initial data structure.
All glyphs start with the unicode (2 bytes) and the offset to the next glyph (1 byte).

U8g2 version 2.23 introduces an additional jump table for quicker lookup of the unicode glyphs (issue #596). This jump table precedes
the unicode glyph table. This means, the above calculated address points to the jump table.
The jump table looks like this:

| offset (2 bytes) | unicode (2 bytes) |
|------------------|---------------------|
| offset to the start of the glyph table | last unicode stored in the first block |
| size of the 1st block/offset to 2nd block | last unicode stored in the 2nd block |
| size of the 2nd block/offset to 3rd block | last unicode stored in the 3nd block |
| ... | ... |
| offset to the end of the gylph table | 0xffff |

This is the code to locate the start address of the glyph block. Inputs are:

 * font: Start position of the lookup table
 * encoding: The  requested encoding.

The variable `font` will contain the start address of the glyphs.

```
    unicode_lookup_table = font;   
    do
    {
      font += u8g2_font_get_word(unicode_lookup_table, 0);
      e = u8g2_font_get_word(unicode_lookup_table, 2);
      unicode_lookup_table+=4;
    } while( e < encoding );
```

For finding the corresponding glyph to a Unicode, the glyph array is jumped through, until the correct
Unicode is either found or excessed. 

All following glyph data does not rely on byte boundaries, but their bit widths are provided by the font header (See "Bit width of XX"). Since only relevant bit width for each property is stored instead of full bytes, we have reasonable reduction of stored data without much decoding overhead.

## Glyph bitmaps

![u8g2_order](https://user-images.githubusercontent.com/38105124/38458579-1c664c76-3aa0-11e8-8c83-e31e7aee5142.png)

Glyph bitmaps are 1-Bit horizontally packed bitmaps with tight fit bounding box (see image above). They are
compressed by an ad-hoc run length algorithm. The bit array has

<ul>
<li><i>m<sub>0</sub></i> Bits (see font header) denoting the number of zeros</li>
<li><i>m<sub>1</sub></i> Bits (see font header) denoting the number of ones</li>
<li><i>n</i> Bits == 1 (to be counted) denoting the number of repetitions of the sequence and</li>
<li><i>1</i> Bit == 0 as stop marker for each sequence.</li>
</ul>

Run lengths go beyond lines. Glyph bitmaps don't contain end markers, since their widths and heights are known.


### Bounding boxes

![u8g2_font_boundingbox](https://user-images.githubusercontent.com/38105124/38458706-776214a6-3aa1-11e8-8625-380d0e5ac612.png)

In contrast to some other GFX systems, the co-ordinates of the bounding boxes point to the right and upwards.
For the most characters, <i>x</i>-offset is the horizontal distance between the very left pixel of the glyph and the left border, so in the picture above, the <i>x</i>-offset is quite exaggerated. <i>y</i>-offset is the vertical distance between baseline and the lowest pixel. For most glyphs without descender, it is equal to zero, for glyphs with descender, it is negative.

Generally, the font bounding box is the outline of all glyph bounding boxes, with all offsets taken into account.
Due to some large glyphs (e.g. for '@' and '|'), the font bounding box can be quite large - larger than typical character pitch or line height. 

There are some fonts, where the font bounding box is a bit larger than the outline of all contained glyphs. This happens, when glyphs are removed. However, this makes no difference in font decoding or display.

Fonts can be generated in different bounding box modes:
<ul>
<li><tt>[t=1]</tt>: Transparent mode. All glyph bounding boxes are tight fit. This generates minimal flash memory footprint.
</li>
<li><tt>[h=2]</tt>: Height mode. All glyph bounding boxes are horizontally tight fit, but have the same height. This allows overwriting text lines without clearing.
</li>
<li><tt>[m=3]</tt>: Monospaced mode. All glyph bounding boxes have the same size, which is equal to font bounding box size.
</li>
</ul>

Bounding box mode is the second last character of the font name (see <a href="https://github.com/olikraus/u8g2/wiki/fntlistall#u8g2-font-names">font names</a>).

## Pitches and distances

### Line pitch

For tabular data, the height of the font bounding box is a valid choice for the line pitch. For plain text, Ascents and descent of 'A', 'g' and '(', which are provided by the font header, can serve as base for typographically correct line pitch.

### Horizontal pitch and line break

Horizontal pitch after each glyph is provided by the glyph header data.

No preparations for kerning have been taken. Advanced kerning could be implemented either manually by counting white space between glyphs in display memory and for calculating of kerning correction, or using kerning information, which is available for some BDF fonts, but exported in a separate file. However, one should avoid kerning on LCD screens for better readability.

For calculation of line breaks, the width and x-offset of the glyph bounding box are suitable.

## Font Decoder

Glyph data (glyph header data as well as glyph bitmap) is stored in bit arrays independent of
byte boundaries to minimize flash memory footprint (see section [Glyph Data](https://github.com/olikraus/u8g2/wiki/u8g2fontformat#glyph-data) ). Each data can be accessed independently and stateless, since all offsets are provided by the font header. However, the decoder functions are designed to decode all glyph data in fixed sequence to increase efficiency.

A state variable of type <tt>u8g2_font_decode_t</tt> contains decoder state as well as decoded glyph header data.
The functions <tt>u8g2_font_decode_get_unsigned_bits</tt> and <tt>u8g2_font_decode_get_signed_bits</tt> fetch the byte-independent data, store it to standard fixed-width integer types and update the decoder state variable.

