/* speed.exe 005052b0 FUN_005052b0; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 * calls 0045cd20 __break
 * calls 00502e80 FUN_00502e80
 */

undefined1 __thiscall FUN_005052b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_5;
  
  local_5 = 0;
  uVar3 = 0;
  if ('\0' < *(char *)(param_1 + 0x19)) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x2c);
      iVar5 = *(int *)(iVar1 + 4 + iVar6 * 8);
      uVar2 = *(undefined4 *)(iVar1 + iVar6 * 8);
      iVar1 = iVar1 + iVar6 * 8;
      if ((((*(int *)(iVar5 + 0x68) == param_2) && (iVar4 = FUN_00502e80(uVar2), iVar4 == 0)) &&
          (iVar5 = FUN_00503400(uVar2,0,0), iVar5 == 0)) &&
         (iVar5 = DAT_00916040, DAT_00916040 == 0)) {
                    /* WARNING: Subroutine does not return */
        __break();
      }
      if (iVar5 != *(int *)(iVar1 + 4)) {
        *(int *)(iVar1 + 4) = iVar5;
        local_5 = 1;
      }
      iVar6 = iVar6 + 1;
      uVar3 = local_5;
    } while (iVar6 < *(char *)(param_1 + 0x19));
  }
  return uVar3;
}

