/* speed.exe 007d9d60 __get_exp; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __get_exp
   
   Library: Visual Studio */

int __get_exp(undefined4 param_1,uint param_2)

{
  short local_8;
  
  local_8 = (short)((int)(param_2 >> 0x10 & 0x7ff0) >> 4);
  return (int)(short)(local_8 + -0x3fe);
}

