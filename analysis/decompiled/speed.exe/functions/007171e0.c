/* speed.exe 007171e0 FUN_007171e0; analysis pseudocode, not buildable source.
 * calls 007082f0 FUN_007082f0
 * calls 0045da30 FUN_0045da30
 * calls 00717190 FUN_00717190
 * calls 007018c0 FUN_007018c0
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_007171e0(int param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_00993cc8;
  if (DAT_00993cc8 == 0) {
    return;
  }
  local_20 = param_1;
  if (((*(int *)(DAT_00993cc8 + 0x1a8) < 1) || (0x50 < *(int *)(DAT_00993cc8 + 0x1a8))) ||
     (*(int *)(DAT_00993cc8 + 0x1a4) == 0)) {
    FUN_00717190();
    return;
  }
  local_1c = *(undefined4 *)(param_1 + 0xc);
  piVar4 = (int *)FUN_007082f0(1);
  if (piVar4 == (int *)0x0) {
switchD_0071723a_caseD_3:
    local_18 = 0x10;
  }
  else {
    uVar5 = (**(code **)(*piVar4 + 0x34))();
    switch(uVar5) {
    case 1:
      local_18 = 1;
      break;
    case 2:
      local_18 = 4;
      break;
    default:
      goto switchD_0071723a_caseD_3;
    case 4:
      local_18 = 2;
      break;
    case 8:
      local_18 = 8;
    }
  }
  if (*(int *)(iVar1 + 0x204) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x204) + 0x24);
  }
  switch(uVar5) {
  case 3:
    uStack_14 = 0x10;
    break;
  default:
    uStack_14 = 1;
    break;
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xd:
    uStack_14 = 8;
    break;
  case 6:
  case 0xe:
    uStack_14 = 2;
    break;
  case 7:
  case 0xb:
  case 0xc:
    uStack_14 = 4;
  }
  iStack_10 = ((*(uint *)(iVar1 + 0x54) >> 0xb & 1) != 0) + 1;
  cVar2 = FUN_007018c0(*(undefined4 *)(iVar1 + 0x1c8),&uStack_28,&uStack_24);
  if ((cVar2 == '\0') &&
     (cVar2 = FUN_007018c0(*(undefined4 *)(iVar1 + 0x1a8),&uStack_28,&uStack_24), cVar2 == '\0')) {
    FUN_007018c0(*(undefined4 *)(iVar1 + 0x1b0),&uStack_28,&uStack_24);
  }
  uStack_4 = uStack_28;
  iStack_c = *(int *)(iVar1 + 0x1c4);
  uStack_8 = uStack_24;
  if (((iStack_c == 0) && (iStack_c = *(int *)(iVar1 + 0x1a4), iStack_c == 0)) &&
     (iStack_c = *(int *)(iVar1 + 0x1ac), iStack_c == 0)) {
    bVar3 = FUN_0045da30(4);
    iStack_c = 1 << (bVar3 & 0x1f);
  }
  FUN_00713b20(0x1c,&local_1c,&PTR_s_AnytimeEvents_DispPursuitEscalat_00901e34,&DAT_00992680,
               local_20);
  return;
}

