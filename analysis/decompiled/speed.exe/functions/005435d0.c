/* speed.exe 005435d0 FUN_005435d0; analysis pseudocode, not buildable source.
 * calls 004611c0 FUN_004611c0
 * calls 00517ff0 FUN_00517ff0
 * calls 00652ad0 _malloc
 * calls 00526660 FUN_00526660
 */

void FUN_005435d0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086fd84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0xd4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_0091cb20 = 0;
  }
  else {
    DAT_0091cb20 = FUN_00517ff0(pvVar1);
  }
  local_4 = 0xffffffff;
  FUN_004611c0(&DAT_0091c300,"Profile");
  FUN_004611c0(&DAT_0091c9c0,"Thumbnail");
  FUN_004611c0(&DAT_0091ca00,"Image");
  FUN_004611c0(&DAT_0091c2b8,"NFSMWSD");
  FUN_00526660();
  ExceptionList = local_c;
  return;
}

