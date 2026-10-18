/* speed.exe 007d5260 ___sbh_verify_block; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    ___sbh_verify_block
   
   Library: Visual Studio 2003 Debug */

undefined4 ___sbh_verify_block(int param_1,int param_2)

{
  uint uVar1;
  undefined4 local_10;
  
  uVar1 = param_2 - *(int *)(param_1 + 0xc);
  if ((((0x80000000U >> ((byte)(uVar1 >> 0xf) & 0x1f) & *(uint *)(param_1 + 8)) == 0) &&
      ((uVar1 & 0xf) == 0)) && ((uVar1 & 0xfff) != 0)) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

