/* speed.exe 00717560 FUN_00717560; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 007018c0 FUN_007018c0
 * calls 00713b20 FUN_00713b20
 */

void __thiscall FUN_00717560(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = DAT_00993cc8;
  if (DAT_00993cc8 != 0) {
    local_20 = *(undefined4 *)(param_1 + 0xc);
    local_1c = param_2;
    local_14 = 1;
    local_18 = ((*(uint *)(DAT_00993cc8 + 0x54) >> 0xb & 1) != 0) + 1;
    cVar2 = FUN_007018c0(*(undefined4 *)(DAT_00993cc8 + 0x1c8),&param_2,&local_24);
    if ((cVar2 == '\0') &&
       (cVar2 = FUN_007018c0(*(undefined4 *)(iVar4 + 0x1a8),&param_2,&local_24), cVar2 == '\0')) {
      FUN_007018c0(*(undefined4 *)(iVar4 + 0x1b0),&param_2,&local_24);
    }
    uVar1 = param_2;
    local_10 = *(int *)(iVar4 + 0x1c4);
    local_8 = param_2;
    local_c = local_24;
    if (((local_10 == 0) && (local_10 = *(int *)(iVar4 + 0x1a4), local_10 == 0)) &&
       (local_10 = *(int *)(iVar4 + 0x1ac), local_10 == 0)) {
      bVar3 = FUN_0045da30(4);
      local_10 = 1 << (bVar3 & 0x1f);
    }
    switch(uVar1) {
    case 1:
      local_4 = 1;
      break;
    case 2:
    case 4:
      local_4 = 4;
      break;
    default:
      local_4 = 0x10;
      break;
    case 8:
      local_4 = 2;
    }
    iVar4 = FUN_0045da30(3);
    if (iVar4 == 2) {
      local_4 = 0x10;
    }
    FUN_00713b20(0x20,&local_20,&PTR_s_AnytimeEvents_Disp911Report_00901ddc,&DAT_00992324,param_1);
  }
  return;
}

