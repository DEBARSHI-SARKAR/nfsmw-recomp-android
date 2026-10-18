/* speed.exe 00833c45 FUN_00833c45; analysis pseudocode, not buildable source.
 * calls 00833a21 FUN_00833a21
 * calls 008346ff FUN_008346ff
 * calls 00833ae7 FUN_00833ae7
 * calls 00833b81 FUN_00833b81
 */

undefined4 FUN_00833c45(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  char *pcVar3;
  undefined4 local_8;
  
  if ((param_3 < 1) && (*(char *)(in_EAX + 3) == '\0')) {
    param_3 = 0;
    uVar2 = (uint)(*(byte *)(in_EAX + 2) >> 2);
    local_8 = 1;
    if (uVar2 != 0) {
      pcVar3 = (char *)(param_2 + 9);
      do {
        if (*pcVar3 == '\0') {
          return 0;
        }
        cVar1 = FUN_008346ff(*pcVar3,(int)*(short *)(pcVar3 + -5));
        param_3 = param_3 + 1;
        pcVar3[1] = pcVar3[-1] + cVar1;
        pcVar3 = pcVar3 + 0xc;
      } while (param_3 < (int)uVar2);
    }
  }
  else {
    FUN_00833a21(param_2);
    local_8 = FUN_00833ae7(param_3);
  }
  FUN_00833b81(param_1,param_2);
  return local_8;
}

