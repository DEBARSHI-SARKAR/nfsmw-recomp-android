/* speed.exe 00549150 FUN_00549150; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00573140 FUN_00573140
 * calls 005af1c0 FUN_005af1c0
 * calls 0056d750 FUN_0056d750
 * calls 00575920 FUN_00575920
 * calls 00585b50 FUN_00585b50
 * calls 00516af0 FUN_00516af0
 * calls 006ff2d0 FUN_006ff2d0
 * calls 00514c70 FUN_00514c70
 * calls 00531cf0 FUN_00531cf0
 * calls 0070e570 FUN_0070e570
 * calls 005a5fe0 FUN_005a5fe0
 */

void __fastcall FUN_00549150(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar2 = FUN_005af1c0("MESSAGE_TEXT_1");
  if ((((iVar3 == 0) || (iVar3 = FUN_00516af0(iVar3), iVar3 == 0)) ||
      (iVar3 = FUN_005b8550(uVar2), iVar3 == 0)) || (*(int *)(iVar3 + 0x18) != 2)) {
    iVar3 = 0;
  }
  uVar2 = FUN_00585b50(*(undefined4 *)(iVar3 + 0x24));
  FUN_00575920(param_1,*(undefined4 *)(iVar3 + 0x74),10,"MESSAGE_TEXT_%d",uVar2);
  *(int *)(param_1 + 0x34) = param_1 + 0x80;
  uVar2 = FUN_00573140("SMS_MESSAGE_%d",**(undefined1 **)(param_1 + 0xdc));
  FUN_005a5fe0(uVar2);
  cVar1 = FUN_0056d750();
  if (cVar1 == '\0') {
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 == 0)) ||
       (iVar3 = FUN_005b8550(0x2a631207), iVar3 == 0)) {
      iVar3 = 0;
    }
    FUN_00514c70(iVar3);
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 == 0)) ||
       (iVar3 = FUN_005b8550(0x914614e5), iVar3 == 0)) {
      iVar3 = 0;
    }
    FUN_00514c70(iVar3);
  }
  piVar4 = (int *)FUN_006ff2d0(1);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x48))();
    FUN_0070e570();
  }
  FUN_00531cf0();
  return;
}

