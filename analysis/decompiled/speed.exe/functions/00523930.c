/* speed.exe 00523930 FUN_00523930; analysis pseudocode, not buildable source.
 * calls 0056f100 FUN_0056f100
 * calls 0056bc10 FUN_0056bc10
 * calls 00513860 FUN_00513860
 * calls 004e4ea0 FUN_004e4ea0
 * calls 00460c70 FUN_00460c70
 * calls 00592410 FUN_00592410
 * calls 0045a430 FUN_0045a430
 * calls 0056f210 FUN_0056f210
 * calls 0067c570 FUN_0067c570
 * calls 0045d380 FUN_0045d380
 * calls 0056ecc0 FUN_0056ecc0
 */

void __fastcall FUN_00523930(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e828;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0056ecc0(*(undefined4 *)(param_1 + 0x3c));
  switch(*(uint *)(param_1 + 0xf8) & 0xffff) {
  case 1:
    uVar2 = 0xd9d6b954;
    break;
  case 2:
    uVar2 = 0xee053562;
    break;
  default:
    uVar2 = 0;
    break;
  case 4:
    uVar2 = 0x2414de28;
    break;
  case 8:
    uVar2 = 0xd8a058f7;
    break;
  case 0x10:
    uVar2 = 0xd8500c3;
    break;
  case 0x20:
    uVar2 = 0x3ec63978;
  }
  iVar1 = FUN_0045d380(0);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -4;
  }
  iVar1 = FUN_00592410(iVar1);
  if (*(int *)(iVar1 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc) + -4;
  }
  uVar2 = FUN_0056bc10(uVar2);
  FUN_00460c70(iVar1 + 0xc,uVar2);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar1 = FUN_0056ecc0(*(undefined4 *)(param_1 + 0x3c));
  FUN_004e4ea0(*(undefined4 *)(iVar1 + 8),0,0);
  local_4 = 0;
  if (*(char *)(iVar1 + 0x10) != -1) {
    puVar3 = local_20;
    FUN_0056f100(*(char *)(iVar1 + 0x10));
    FUN_0056f210(puVar3);
  }
  FUN_0067c570(local_20,&local_2c);
  FUN_00513860(*(undefined4 *)(param_1 + 0x10),param_1 + 0x148,param_1 + 0x104,param_1 + 0x18c,
               local_2c,local_28,local_24);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_c;
  return;
}

