/* speed.exe 007f7316 FUN_007f7316; analysis pseudocode, not buildable source.
 * calls 007c6100 _sprintf
 */

void FUN_007f7316(char *param_1,ushort *param_2)

{
  ushort uVar1;
  
  for (; uVar1 = *param_2, uVar1 != 0; param_2 = param_2 + 1) {
    if ((uVar1 < 0x100) && ((uVar1 != 0x5c || (param_2[1] != 0x78)))) {
      *param_1 = (char)*param_2;
      param_1 = param_1 + 1;
    }
    else {
      _sprintf(param_1,"\\x%04x",(uint)uVar1);
      param_1 = param_1 + 6;
    }
  }
  *param_1 = '\0';
  return;
}

