/* speed.exe 00641a30 FUN_00641a30; analysis pseudocode, not buildable source.
 * calls 004647e0 FUN_004647e0
 * calls 005cc240 FUN_005cc240
 * calls 00469d20 FUN_00469d20
 * calls 0056bc10 FUN_0056bc10
 * calls 0065faf0 FUN_0065faf0
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00641a30(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 *local_90;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087989b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a72f8;
  local_4 = 0;
  if (DAT_0092d884 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0092d87c;
  }
  uVar1 = 0;
  if (piVar2 != (int *)0x0) {
    switch(param_1[2]) {
    case 1:
      uVar1 = 0x1f87313a;
      break;
    case 2:
      uVar1 = 0x6df08aff;
      break;
    case 4:
      uVar1 = 0x21857819;
      break;
    case 8:
      uVar1 = 0x66432b02;
      break;
    case 0x10:
      uVar1 = 0x3e1b41f3;
      break;
    case 0x20:
      uVar1 = 0x98ac2bae;
      break;
    case 0x40:
      uVar1 = 0xc03aa693;
      break;
    case 0x80:
      uVar1 = 0x50f83c6c;
    }
    local_90 = param_1;
    uVar1 = FUN_0056bc10(uVar1);
    FUN_004647e0(local_8c,0x80,&DAT_008941f8,uVar1);
    (**(code **)(*piVar2 + 0x20))();
    piVar2 = (int *)FUN_005d59f0(&LAB_00565aa0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(local_8c);
    }
    uVar3 = FUN_005cc240("Infraction");
    uVar1 = param_1[2];
    FUN_00469d20(&uStack_a8);
    uStack_a4 = uStack_a8;
    uStack_9c = 0x14;
    uStack_98 = 0;
    uStack_a0 = uVar3;
    uStack_94 = uVar1;
    FUN_0065faf0();
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

