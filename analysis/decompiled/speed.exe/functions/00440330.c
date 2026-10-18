/* speed.exe 00440330 FUN_00440330; analysis pseudocode, not buildable source.
 * calls 0043fb00 FUN_0043fb00
 * calls 0043f520 FUN_0043f520
 * calls 005d29d0 FUN_005d29d0
 * calls 0043fe90 FUN_0043fe90
 * calls 00440050 FUN_00440050
 * calls 0043f1a0 FUN_0043f1a0
 * calls 0043f770 FUN_0043f770
 */

void __thiscall FUN_00440330(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008696c9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 200) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 200))(1);
  }
  switch(*(undefined4 *)(param_1 + 0x108)) {
  case 1:
    iVar1 = FUN_005d29d0(0x20,0);
    uStack_4 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_0043fe90(param_2);
      break;
    }
    goto LAB_004404b1;
  case 2:
    iVar1 = FUN_005d29d0(0x28,0);
    uStack_4 = 1;
    if (iVar1 == 0) goto LAB_004404b1;
    uVar2 = FUN_0043f1a0(param_2,param_1 + 0x48);
    break;
  case 3:
    iVar1 = FUN_005d29d0(0x28,0);
    uStack_4 = 2;
    if (iVar1 == 0) goto LAB_004404b1;
    uVar2 = FUN_0043f520(param_2,param_1 + 0x48);
    break;
  case 4:
    iVar1 = FUN_005d29d0(0x20,0);
    uStack_4 = 3;
    goto LAB_00440473;
  case 5:
    iVar1 = FUN_005d29d0(0x20,0);
    uStack_4 = 5;
LAB_00440473:
    if (iVar1 == 0) {
LAB_004404b1:
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0043f770(param_2);
    }
    break;
  case 6:
    iVar1 = FUN_005d29d0(0x20,0);
    uStack_4 = 4;
    if (iVar1 == 0) goto LAB_004404b1;
    uVar2 = FUN_00440050(param_2);
    break;
  case 7:
    iVar1 = FUN_005d29d0(0x20,0);
    uStack_4 = 6;
    if (iVar1 == 0) goto LAB_004404b1;
    uVar2 = FUN_0043fb00(param_2);
    break;
  default:
    goto switchD_00440369_default;
  }
  *(undefined4 *)(param_1 + 200) = uVar2;
switchD_00440369_default:
  ExceptionList = pvStack_c;
  return;
}

