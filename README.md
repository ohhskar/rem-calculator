# Rem-calc

I usually used Google to divide px values into rem values. I realized that this
wasted a lot of time and bandwidth. I tried using [calc](http://www.isthe.com/chongo/tech/comp/calc/)
but I found it cumbersome to always add `/16` to all my conversions. This small
piece of code, written in less than 30 minutes, was created to solve this miniscule
problem.

## Usage
Rem-calc accepts 0 - 1 arguments. The argument will specify the font-size in the :root
element. If no arguments are passed, this is defaulted to 16px. When the program is run,
 you can input any number, in px, and the resulting rem value will be outputted.
```
rem-calc [root-font-size]
```
