/* speed.exe 004bea70 FUN_004bea70; analysis pseudocode, not buildable source.
 * calls 004b5750 FUN_004b5750
 * calls 0073d810 FUN_0073d810
 * calls 0074b640 FUN_0074b640
 * calls 004b57e0 FUN_004b57e0
 */

void __fastcall FUN_004bea70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x74);
  uVar1 = 0;
  if ((((DAT_00914a90 != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
      (*(char *)(param_1 + 0x22) == '\x02')) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x34), iVar2 != 0)) {
    FUN_0074b640(*(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x44));
    uVar1 = FUN_0073d810(0);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    uVar1 = FUN_0073d810(2);
  }
  if ((0xb < *(int *)(param_1 + 0x74)) || (*(int *)(param_1 + 0x74) < 0)) {
    *(uint *)(param_1 + 0x74) = -(uint)(*(int *)(DAT_00911fa8 + 0x70) != 1) & 9;
  }
  iVar2 = *(int *)(&DAT_008efc90 + *(int *)(param_1 + 0x74) * 4);
  if (0xb < iVar2) {
    iVar2 = 9;
  }
  if ((*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x70)) && (*(char *)(param_1 + 0x28) == '\0'))
  {
    FUN_004b57e0(iVar2,uVar1);
    return;
  }
  FUN_004b5750(uVar1);
  return;
}

