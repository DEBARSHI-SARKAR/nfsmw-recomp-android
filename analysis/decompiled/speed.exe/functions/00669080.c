/* speed.exe 00669080 FUN_00669080; analysis pseudocode, not buildable source.
 * calls 00748230 FUN_00748230
 * calls 006e8df0 FUN_006e8df0
 * calls 00460bf0 FUN_00460bf0
 * calls 00739f80 FUN_00739f80
 * calls 007398d0 FUN_007398d0
 */

int * __thiscall FUN_00669080(int *param_1,int param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  param_1[2] = 0;
  puVar2 = *(undefined1 **)(*(int *)(param_2 + 8) + 0x1c);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_00890978;
  }
  uVar3 = FUN_00460bf0(puVar2);
  iVar4 = FUN_007398d0(uVar3);
  *param_1 = iVar4;
  if ((iVar4 != -1) && (iVar4 < 0x54)) {
    cVar1 = FUN_00748230(iVar4);
    if (cVar1 != '\0') {
      param_1[2] = param_1[2] | 4;
    }
    iVar4 = FUN_006e8df0();
    iVar4 = FUN_00739f80(*param_1,param_4,'\x01' - (iVar4 != 1));
    param_1[1] = iVar4;
    if (param_3 != '\0') {
      param_1[2] = param_1[2] | 2;
    }
    if (iVar4 != 0) {
      param_1[2] = param_1[2] | 1;
    }
  }
  return param_1;
}

