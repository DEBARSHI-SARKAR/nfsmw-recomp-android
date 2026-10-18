/* speed.exe 007bf180 FUN_007bf180; analysis pseudocode, not buildable source.
 * calls 007beed0 FUN_007beed0
 * calls 00652ad0 _malloc
 */

undefined4 FUN_007bf180(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883904;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x8c);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_007beed0(param_1,1,&DAT_009ba088,0);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

