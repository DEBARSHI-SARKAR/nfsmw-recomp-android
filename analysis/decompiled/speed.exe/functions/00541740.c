/* speed.exe 00541740 FUN_00541740; analysis pseudocode, not buildable source.
 * calls 00515e20 FUN_00515e20
 * calls 00586ca0 FUN_00586ca0
 * calls 0056bc10 FUN_0056bc10
 * calls 00796f60 FUN_00796f60
 * calls 00796d30 FUN_00796d30
 */

void __fastcall FUN_00541740(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 local_88;
  undefined4 local_87;
  
  uVar3 = 0;
  uVar1 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x58));
  switch(uVar1) {
  case 1:
    uVar3 = 0x100;
    break;
  case 2:
    uVar3 = 0x200;
    break;
  case 3:
    uVar3 = 0x300;
    break;
  case 4:
    uVar3 = 0x400;
    break;
  case 5:
    uVar3 = 0x500;
    break;
  case 6:
    uVar3 = 0x600;
    break;
  case 7:
    uVar3 = 0x700;
  }
  puVar6 = &LAB_00527c40;
  puVar5 = &DAT_0091c39c;
  FUN_00796d30(&DAT_0091c39c,uVar3,&LAB_00527c40,param_1);
  FUN_00796f60(puVar5,uVar3,puVar6,param_1);
  local_88 = 0;
  puVar4 = &local_87;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  uVar1 = FUN_0056bc10(0x5566d903,&DAT_0091c39c);
  FUN_00515e20(&local_88,0x80,uVar1);
  return;
}

