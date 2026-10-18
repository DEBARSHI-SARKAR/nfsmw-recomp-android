/* speed.exe 005035a0 FUN_005035a0; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 * calls 00502e80 FUN_00502e80
 */

int FUN_005035a0(int param_1,undefined4 param_2,int param_3,char param_4)

{
  int iVar1;
  
  if (param_4 == '\0') {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x68) == param_3)) {
      iVar1 = FUN_00502e80(param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_00503400(param_2,0,0);
        return iVar1;
      }
    }
  }
  else if (param_1 == 0) {
    iVar1 = FUN_00502e80(param_2);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x53) = 1;
      return iVar1;
    }
  }
  return param_1;
}

