/* speed.exe 00742680 FUN_00742680; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 00737c00 FUN_00737c00
 */

void __thiscall FUN_00742680(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  if (*(uint *)(param_1 + 0x17c8) == *param_2) {
    return;
  }
  *(uint *)(param_1 + 0x17c8) = *param_2;
  FUN_00737c00('\x01' - ((*param_2 & 7) == 0),0x2e,0x2e);
  FUN_00737c00('\x01' - (((byte)*param_2 & 0x38) < 8),0x31,0x31);
  FUN_00737c00('\x01' - ((*param_2 & 0x7000) < 0x1000),0x2f,0x2f);
  FUN_00737c00('\x01' - ((*param_2 & 0x38000) < 0x8000),0x30,0x30);
  FUN_00737c00('\x01' - ((*param_2 & 0x1c0000) < 0x40000),0x32,0x32);
  FUN_00737c00('\x01' - ((*param_2 & 0xe00000) < 0x200000),0x33,0x33);
  uVar1 = *param_2;
  iVar2 = FUN_00460bf0("WINDOW_FRONT");
  if ((uVar1 & 7) < 2) {
    bVar3 = iVar2 == *(int *)(param_1 + 0x2dc);
  }
  else {
    iVar2 = 0xa155545;
    bVar3 = *(int *)(param_1 + 0x2dc) == 0xa155545;
  }
  if (!bVar3) {
    *(int *)(param_1 + 0x2dc) = iVar2;
    *(undefined4 *)(param_1 + 0x2e0) = 0xffffffff;
  }
  uVar1 = *param_2;
  iVar2 = FUN_00460bf0("WINDOW_FRONT");
  if ((uVar1 >> 3 & 7) < 2) {
    bVar3 = iVar2 == *(int *)(param_1 + 0x2e8);
  }
  else {
    iVar2 = 0xa155545;
    bVar3 = *(int *)(param_1 + 0x2e8) == 0xa155545;
  }
  if (!bVar3) {
    *(int *)(param_1 + 0x2e8) = iVar2;
    *(undefined4 *)(param_1 + 0x2ec) = 0xffffffff;
  }
  uVar1 = *param_2;
  iVar2 = FUN_00460bf0("WINDOW_FRONT");
  if ((uVar1 >> 0xc & 7) < 2) {
    bVar3 = iVar2 == *(int *)(param_1 + 0x2f4);
  }
  else {
    iVar2 = 0xa155545;
    bVar3 = *(int *)(param_1 + 0x2f4) == 0xa155545;
  }
  if (!bVar3) {
    *(int *)(param_1 + 0x2f4) = iVar2;
    *(undefined4 *)(param_1 + 0x2f8) = 0xffffffff;
  }
  uVar1 = *param_2;
  iVar2 = FUN_00460bf0("WINDOW_FRONT");
  if ((uVar1 >> 0x12 & 7) < 2) {
    bVar3 = iVar2 == *(int *)(param_1 + 0x300);
  }
  else {
    iVar2 = 0xa155545;
    bVar3 = *(int *)(param_1 + 0x300) == 0xa155545;
  }
  if (!bVar3) {
    *(int *)(param_1 + 0x300) = iVar2;
    *(undefined4 *)(param_1 + 0x304) = 0xffffffff;
  }
  uVar1 = *param_2;
  iVar2 = FUN_00460bf0("WINDOW_FRONT");
  if ((uVar1 >> 0xf & 7) < 2) {
    bVar3 = iVar2 == *(int *)(param_1 + 0x30c);
  }
  else {
    iVar2 = 0xa155545;
    bVar3 = *(int *)(param_1 + 0x30c) == 0xa155545;
  }
  if (!bVar3) {
    *(int *)(param_1 + 0x30c) = iVar2;
    *(undefined4 *)(param_1 + 0x310) = 0xffffffff;
  }
  uVar1 = *param_2;
  iVar2 = FUN_00460bf0("WINDOW_FRONT");
  if ((uVar1 >> 0x15 & 7) < 2) {
    if (iVar2 == *(int *)(param_1 + 0x318)) goto LAB_007428a2;
    *(int *)(param_1 + 0x318) = iVar2;
  }
  else {
    if (*(int *)(param_1 + 0x318) == 0xa155545) goto LAB_007428a2;
    *(undefined4 *)(param_1 + 0x318) = 0xa155545;
  }
  *(undefined4 *)(param_1 + 0x31c) = 0xffffffff;
LAB_007428a2:
  uVar1 = *param_2;
  iVar2 = FUN_00460bf0("REAR_DEFROSTER");
  if ((uVar1 >> 3 & 7) < 2) {
    if (iVar2 != *(int *)(param_1 + 0x324)) {
      *(int *)(param_1 + 0x324) = iVar2;
      *(undefined4 *)(param_1 + 0x328) = 0xffffffff;
    }
  }
  else if (*(int *)(param_1 + 0x324) != 0xa155545) {
    *(undefined4 *)(param_1 + 0x324) = 0xa155545;
    *(undefined4 *)(param_1 + 0x328) = 0xffffffff;
    return;
  }
  return;
}

