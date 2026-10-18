/* speed.exe 007c3920 FUN_007c3920; analysis pseudocode, not buildable source.
 * calls 00576410 FUN_00576410
 * calls 007bb3e0 FUN_007bb3e0
 * calls 0057fc50 FUN_0057fc50
 * calls 007bfff0 FUN_007bfff0
 * calls 007c3690 FUN_007c3690
 * calls 00575b00 FUN_00575b00
 */

undefined4 * __thiscall FUN_007c3920(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883bc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007bb3e0(param_2);
  iVar2 = 0;
  *param_1 = &PTR_FUN_008b8088;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  local_4 = 0;
  if (DAT_008f5108 == 0) {
    DAT_009b9e64 = 0;
  }
  FUN_007c3690(DAT_008f5108,DAT_0091d3d4);
  do {
    if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
      if (((*(uint *)(DAT_0091cf90 + 300) & 8) == 0) ||
         (cVar1 = '\x04', (*(uint *)(DAT_0091cf90 + 300) & 0x20) == 0)) {
        cVar1 = '\x01';
      }
    }
    else {
      cVar1 = FUN_00575b00();
      cVar1 = (-(cVar1 != '\0') & 8U) + 2;
    }
    FUN_00576410(iVar2,cVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x39);
  FUN_007bfff0();
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) || (DAT_009b9e8d != '\0')) {
    FUN_0057fc50();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

