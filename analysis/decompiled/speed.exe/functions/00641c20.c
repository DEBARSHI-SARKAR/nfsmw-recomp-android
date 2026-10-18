/* speed.exe 00641c20 FUN_00641c20; analysis pseudocode, not buildable source.
 * calls 004647e0 FUN_004647e0
 * calls 0056a500 FUN_0056a500
 * calls 0056bc60 FUN_0056bc60
 * calls 005e55a0 FUN_005e55a0
 * calls 005d59f0 FUN_005d59f0
 * calls 0057fe40 FUN_0057fe40
 */

undefined4 * __thiscall FUN_00641c20(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008798b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_LAB_008a7dc4;
  param_1[2] = param_2;
  local_4 = 0;
  if (DAT_0092d884 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0092d87c;
  }
  iVar1 = (**(code **)(*piVar2 + 0x20))();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_005d59f0(&LAB_005650b0), piVar2 != (int *)0x0)) {
    uVar3 = FUN_005e55a0();
    uVar3 = FUN_0057fe40(uVar3);
    uVar3 = FUN_0056bc60(uVar3);
    uVar3 = FUN_0056bc60(0xfb197367,uVar3);
    FUN_004647e0(auStack_4c,0x40,"%s\n%s",uVar3);
    (**(code **)(*piVar2 + 4))(auStack_4c,0,0x8ab83edb,0,0,4);
  }
  FUN_0056a500(param_1[2]);
  ExceptionList = pvStack_c;
  return param_1;
}

