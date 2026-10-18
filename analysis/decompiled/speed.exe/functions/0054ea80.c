/* speed.exe 0054ea80 FUN_0054ea80; analysis pseudocode, not buildable source.
 * calls 00591af0 FUN_00591af0
 * calls 00579780 FUN_00579780
 * calls 005b0d70 FUN_005b0d70
 * calls 0056b0b0 FUN_0056b0b0
 * calls 0056b220 FUN_0056b220
 * calls 005256d0 FUN_005256d0
 * calls 00569c80 FUN_00569c80
 * calls 00652ad0 _malloc
 * calls 0056afd0 FUN_0056afd0
 * calls 005435d0 FUN_005435d0
 */

void FUN_0054ea80(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870684;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0091cae0 == (undefined1 *)0x0) {
    ExceptionList = &local_c;
    DAT_0091cae0 = _malloc(0x30);
    if (DAT_0091cae0 == (undefined1 *)0x0) {
      DAT_0091cae0 = (undefined1 *)0x0;
    }
    else {
      *DAT_0091cae0 = 0;
      DAT_0091cae0[1] = 0;
      *(undefined4 *)(DAT_0091cae0 + 0xc) = 0;
      *(undefined4 *)(DAT_0091cae0 + 0x10) = 0;
      *(undefined4 *)(DAT_0091cae0 + 0x14) = 0xff;
      *(undefined4 *)(DAT_0091cae0 + 0x18) = 0;
      *(undefined4 *)(DAT_0091cae0 + 0x1c) = 0;
      *(undefined4 *)(DAT_0091cae0 + 0x20) = 0;
      DAT_0091cae0[0x24] = 1;
      *(undefined4 *)(DAT_0091cae0 + 0x28) = 0;
      DAT_0091cae0[0x2c] = 0;
      *(undefined4 *)(DAT_0091cae0 + 2) = 0;
      *(undefined4 *)(DAT_0091cae0 + 6) = 0;
    }
  }
  FUN_005b0d70();
  FUN_0056b0b0();
  FUN_0056afd0();
  FUN_0056b220();
  FUN_00569c80();
  DAT_0091cad4 = _malloc(0xc);
  if (DAT_0091cad4 == (undefined4 *)0x0) {
    DAT_0091cad4 = (undefined4 *)0x0;
  }
  else {
    *DAT_0091cad4 = &PTR_LAB_0089b438;
    *(undefined1 *)(DAT_0091cad4 + 1) = 1;
    DAT_0091cad4[2] = 0;
  }
  FUN_00579780();
  FUN_005256d0();
  pvVar2 = _malloc(0x7bd0);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    DAT_0091cfa8 = 0;
  }
  else {
    DAT_0091cfa8 = FUN_00591af0();
  }
  local_4 = 0xffffffff;
  FUN_005435d0();
  puVar1 = (undefined4 *)(DAT_0091cae0 + 0x18);
  *(undefined4 *)(DAT_0091cae0 + 0x1c) = *(undefined4 *)(DAT_0091cae0 + 0x18);
  *puVar1 = 1;
  DAT_0091ca48 = _malloc(8);
  if (DAT_0091ca48 == (undefined4 *)0x0) {
    DAT_0091ca48 = (undefined4 *)0x0;
    ExceptionList = local_c;
    return;
  }
  *DAT_0091ca48 = &PTR_LAB_0089b1ec;
  DAT_0091ca48[1] = 0xffffffff;
  ExceptionList = local_c;
  return;
}

