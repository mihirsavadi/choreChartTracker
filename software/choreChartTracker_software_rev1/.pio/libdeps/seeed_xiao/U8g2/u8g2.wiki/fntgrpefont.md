
[tocstart]: # (toc start)

  * [Reference](#reference)
  * [Notes ](#notes-)
  * [Copyright](#copyright)
    * [File README](#file-readme)
    * [File README.baekmuk](#file-readmebaekmuk)
    * [File Copyright](#file-copyright)
    * [File README.naga10](#file-readmenaga10)
    * [b10](#b10)
    * [b10_b](#b10_b)
    * [f10](#f10)
    * [f10_b](#f10_b)
    * [b12](#b12)
    * [b12_b](#b12_b)
    * [f12](#f12)
    * [f12_b](#f12_b)
    * [b16](#b16)
    * [b16_b](#b16_b)
    * [f16](#f16)
    * [f16_b](#f16_b)

[tocend]: # (toc end)

# Reference

Name: **efont project**

Font download location is [here](http://openlab.ring.gr.jp/efont/unicode/).

# Notes 

  * All fonts are included in two variantes and are selected from [this site](http://www.tonypottier.info/Unicode_And_Japanese_Kanji/Appendix2.html)
    * Japanese1: Learning level 1-6
    * Japanese2: Learning level 1-7
    * Japanese3: Extended version with halfwidth and fullwidth forms. 
  * 24 pixel font is not included because of the size.
  * 14 pixel font is not included because of a problem with the sources (failure of the font build tool chain)
  * Only the 10 pixel version on may fit into Arduino Uno Flash ROM

# Copyright

## File README

```
efont-unicode-bdf (The /efont/ Unicode Bitmap Fonts)

  /efont/ The Electronic Font Open Laboratory
  http://openlab.ring.gr.jp/efont/

  Kazuhiko <kazuhiko@ring.gr.jp>
  Kenji Kano <kc@ring.gr.jp>

The /efont/ unicode bitmap fonts include the following bitmaps.  Also
many characters are designed by /efont/ project.  Please see ChangeLog
for detail.

If you want to help us in extending or improving the fonts, please see
README.contrib.

================
10 pixels
================

5x7.bdf 2001-07-18
http://www.cl.cam.ac.uk/~mgk25/ucs-fonts.html
License: Public Domain
(Add 2 blank pixles to top and 1 blank pixel to bottom so as to fit 5x10.)

5x8.bdf 2001-07-18
http://www.cl.cam.ac.uk/~mgk25/ucs-fonts.html
License: Public Domain
(Add 1 blank pixles to top and 1 blank pixel to bottom so as to fit 5x10.)

*** optional ***
5x10rk.bdf 5x10a.bdf knj10.bdf (naga10-1.1)
(c) Copyright 1998, 1999, NAGAO, Sadakazu 
http://www.vector.co.jp/authors/VA013391/
License: Freely usable, but restricted. See README.naga10 for detail
         (Japanese).

================
12 pixels
================

gulim12.bdf
http://zinc.skku.ac.kr/~wkpark/baekmuk/20001116/
(c) Copyright 1986-2000, Hwan Design Inc.
License: see 'README.baekmuk'

K12-[12].bdf 0.15
Created by Toshiyuki Imamura
http://www.mars.sphere.ne.jp/imamura/jisx0213.html
License: Public Domain

shnmk12.bdf, shnm6x12r.bdf (shinonome-0.9.6)
Maintained by /efont/
http://openlab.ring.gr.jp/efont/shinonome/
License: Public Domain

6x12.bdf 2001-07-18
http://www.cl.cam.ac.uk/~mgk25/ucs-fonts.html
License: Public Domain
(Most characters are shifted 1 dot right so as to conform to the design
rule of efont-unicode-bdf.)

================
14 pixels
================

dotum14.bdf
(c) Copyright 1986-2000, Hwan Design Inc.
License: see 'README.baekmuk'
(Modify 2628, 262A, 262B, 2638, 263A, 263B, 2651, 2652, 2655, 2656,
2659, 265A, 265D, 2663 so as to fit 14x14.)

johab14.hex
(c) Copyright 2000 /efont/
License: See COPYRIGHT

K14-[12].bdf 0.99a
Created by Toshiyuki Imamura
http://www.mars.sphere.ne.jp/imamura/jisx0213.html
License: Public Domain

shnmk14.bdf (shinonome-0.9.6)
Maintained by /efont/
http://openlab.ring.gr.jp/efont/shinonome/
License: Public Domain

thai14.bdf (GNU intlfonts-1.2)
Created by Manop Wongsaisuwan <manop@ee.chula.edu>.
License: Public Domain

lao14-mule.bdf (GNU intlfonts-1.2)
Created by Sihattha Rasphone <sihattha@jaist.ac.jp>.
License: Public Domain

7x14.bdf 2001-07-18
http://www.cl.cam.ac.uk/~mgk25/ucs-fonts.html
License: Public Domain
(Most characters are shifted 1 dot right so as to conform to the design
rule of efont-unicode-bdf.)

etl14-unicode.bdf 2000-02-18
ftp://ftp.ring.gr.jp/pub/X/opengroup/contrib/fonts/
License: Public Domain

================
16 pixels
================

dotum16.bdf
(c) Copyright 1986-2000, Hwan Design Inc.
License: see 'README.baekmuk'
(Modify 2566, 2628, 262A, 262B, 2638, 263A, 263B, 2651, 2652, 2655,
2656, 2659, 265A, 2757, 2768, 3477 so as to fit 16x16.)

taipei16.bdf (GNU intlfonts-1.2)
ftp.ifcss.org: /software/fonts
License: Public Domain

gb16fs.bdf (GNU intlfonts-1.2)
Copyright (c) 1988  The Institute of Software, Academia Sinica.
License: See below *1

jiskan16-2000-[12].bdf 1.03
Created by Toshiyuki Imamura and HANATAKA Shinya
http://www.mars.sphere.ne.jp/imamura/jisx0213.html
License: Public Domain

shnmk16.bdf (shinonome-0.9.6)
Maintained by /efont/
http://openlab.ring.gr.jp/efont/shinonome/
License: Public Domain

thai16.bdf (GNU intlfonts-1.2)
Created by Manop Wongsaisuwan <manop@ee.chula.edu>.
License: Public Domain

lao16-mule.bdf (GNU intlfonts-1.2)
Created by Sihattha Rasphone <sihattha@jaist.ac.jp>.
License: Public Domain

ind16-uni.bdf (GNU intlfonts-1.2)
License: Public Domain

8x13.bdf 2001-07-18
http://www.cl.cam.ac.uk/~mgk25/ucs-fonts.html
License: Public Domain
(Add 2 blank pixles to top and 1 blank pixel to bottom so as to fit 8x16.)

etl16-unicode.bdf 2000-02-18
ftp://ftp.ring.gr.jp/pub/X/opengroup/contrib/fonts/
License: Public Domain

================
24 pixels
================

taipei24.bdf (GNU intlfonts-1.2)
ftp.ifcss.org: /software/fonts
License: Public Domain

gb24st.bdf (GNU intlfonts-1.2)
Copyright (c) 1988  The Institute of Software, Academia Sinica.
License: See below *1

johab24.hex (based on hanglm24.bdf)
(c) Copyright 2001 /efont/
License: See COPYRIGHT

hanglm24.bdf (GNU intlfonts-1.2)
Copyright (c) 1987, 1988 Daewoo Electronics Co.,Ltd.
License: X License

jiskan24.bdf (GNU intlfonts-1.2)
Copyright 1984, Japanese Industrial Standard
License: Public Domain

etl24-unicode.bdf 2000-02-18
ftp://ftp.ring.gr.jp/pub/X/opengroup/contrib/fonts/
License: Public Domain

================
Tools
================

mkbold
Sadakazu Nagao <snagao@cs.titech.ac.jp>  
http://hp.vector.co.jp/authors/VA013391/tools/#mkbold
Modified by Yasuyuki Furukawa <yasu@on.cs.keio.ac.jp>   
License: Public Domain

mkitalic (Perl version)
Yusuke Shinnyama <euske@cl.cs.titech.ac.jp>
License: Public Domain


*1 gb16fs.bdf, gb24st.bdf
Copyright (C) 1988  The Institute of Software, Academia Sinica.

Correspondence Address:  P.O.Box 8718, Beijing, China 100080.

Permission to use, copy, modify, and distribute this software and
its documentation for any purpose and without fee is hereby granted,
provided that the above copyright notices appear in all copies and
that both those copyright notices and this permission notice appear
in supporting documentation, and that the name of "the Institute of
Software, Academia Sinica" not be used in advertising or publicity
pertaining to distribution of the software without specific, written
prior permission.  The Institute of Software, Academia Sinica,
makes no representations about the suitability of this software
for any purpose.  It is provided "as is" without express or
implied warranty.

THE INSTITUTE OF SOFTWARE, ACADEMIA SINICA, DISCLAIMS ALL WARRANTIES
WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL THE INSTITUTE OF
SOFTWARE, ACADEMIA SINICA, BE LIABLE FOR ANY SPECIAL, INDIRECT OR
CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

```


## File README.baekmuk

```
(c) Copyright 1986-2000, Hwan Design Inc.

You are hereby granted permission under all Hwan Design propriety rights
to use, copy, modify, sublicense, sell, and redistribute the 4 Baekmuk
truetype outline fonts for any purpose and without restriction;
provided, that this notice is left intact on all copies of such fonts
and that Hwan Design Int.'s trademark is acknowledged as shown below
on all copies of the 4 Baekmuk truetype fonts.

BAEKMUK BATANG is a registered trademark of Hwan Design Inc.
BAEKMUK GULIM is a registered trademark of Hwan Design Inc.
BAEKMUK DOTUM is a registered trademark of Hwan Design Inc.
BAEKMUK HEADLINE is a registered trademark of Hwan Design Inc.

```


## File Copyright

```

(c) Copyright 2000-2001 /efont/ The Electronic Font Open Laboratory.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. Neither the name of the team nor the names of its contributors
   may be used to endorse or promote products derived from this font
   without specific prior written permission.

THIS FONT IS PROVIDED BY THE TEAM AND CONTRIBUTORS ``AS IS'' AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE TEAM OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS FONT, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```

## File README.naga10

This file is in japanese only, please download [here](http://openlab.ring.gr.jp/efont/unicode/).



## b10
![fntpic/u8g2_font_b10_t_japanese1.png](fntpic/u8g2_font_b10_t_japanese1.png)

![fntpic/u8g2_font_b10_t_japanese2.png](fntpic/u8g2_font_b10_t_japanese2.png)

## b10_b
![fntpic/u8g2_font_b10_b_t_japanese1.png](fntpic/u8g2_font_b10_b_t_japanese1.png)

![fntpic/u8g2_font_b10_b_t_japanese2.png](fntpic/u8g2_font_b10_b_t_japanese2.png)

## f10
![fntpic/u8g2_font_f10_t_japanese1.png](fntpic/u8g2_font_f10_t_japanese1.png)

![fntpic/u8g2_font_f10_t_japanese2.png](fntpic/u8g2_font_f10_t_japanese2.png)

## f10_b
![fntpic/u8g2_font_f10_b_t_japanese1.png](fntpic/u8g2_font_f10_b_t_japanese1.png)

![fntpic/u8g2_font_f10_b_t_japanese2.png](fntpic/u8g2_font_f10_b_t_japanese2.png)

## b12
![fntpic/u8g2_font_b12_t_japanese1.png](fntpic/u8g2_font_b12_t_japanese1.png)

![fntpic/u8g2_font_b12_t_japanese2.png](fntpic/u8g2_font_b12_t_japanese2.png)

![fntpic/u8g2_font_b12_t_japanese3.png](fntpic/u8g2_font_b12_t_japanese3.png)

## b12_b
![fntpic/u8g2_font_b12_b_t_japanese1.png](fntpic/u8g2_font_b12_b_t_japanese1.png)

![fntpic/u8g2_font_b12_b_t_japanese2.png](fntpic/u8g2_font_b12_b_t_japanese2.png)

![fntpic/u8g2_font_b12_b_t_japanese3.png](fntpic/u8g2_font_b12_b_t_japanese3.png)

## f12
![fntpic/u8g2_font_f12_t_japanese1.png](fntpic/u8g2_font_f12_t_japanese1.png)

![fntpic/u8g2_font_f12_t_japanese2.png](fntpic/u8g2_font_f12_t_japanese2.png)

## f12_b
![fntpic/u8g2_font_f12_b_t_japanese1.png](fntpic/u8g2_font_f12_b_t_japanese1.png)

![fntpic/u8g2_font_f12_b_t_japanese2.png](fntpic/u8g2_font_f12_b_t_japanese2.png)

## b16
![fntpic/u8g2_font_b16_t_japanese1.png](fntpic/u8g2_font_b16_t_japanese1.png)

![fntpic/u8g2_font_b16_t_japanese2.png](fntpic/u8g2_font_b16_t_japanese2.png)

![fntpic/u8g2_font_b16_t_japanese3.png](fntpic/u8g2_font_b16_t_japanese3.png)

## b16_b
![fntpic/u8g2_font_b16_b_t_japanese1.png](fntpic/u8g2_font_b16_b_t_japanese1.png)

![fntpic/u8g2_font_b16_b_t_japanese2.png](fntpic/u8g2_font_b16_b_t_japanese2.png)

![fntpic/u8g2_font_b16_b_t_japanese3.png](fntpic/u8g2_font_b16_b_t_japanese3.png)

## f16
![fntpic/u8g2_font_f16_t_japanese1.png](fntpic/u8g2_font_f16_t_japanese1.png)

![fntpic/u8g2_font_f16_t_japanese2.png](fntpic/u8g2_font_f16_t_japanese2.png)

## f16_b
![fntpic/u8g2_font_f16_b_t_japanese1.png](fntpic/u8g2_font_f16_b_t_japanese1.png)

![fntpic/u8g2_font_f16_b_t_japanese2.png](fntpic/u8g2_font_f16_b_t_japanese2.png)
