/* speed.exe 004f26d0 FUN_004f26d0; analysis pseudocode, not buildable source.
 * calls 004eb610 FUN_004eb610
 * calls 004ac040 FUN_004ac040
 */

undefined4 FUN_004f26d0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d371;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = PTR_s_EAXCar_008ef98c;
  iVar1 = FUN_004ac040(0x120,PTR_s_EAXCar_008ef98c,0);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_004eb610(puVar3,iVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

