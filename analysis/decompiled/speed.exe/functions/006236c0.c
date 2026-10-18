/* speed.exe 006236c0 FUN_006236c0; analysis pseudocode, not buildable source.
 * calls 0073db00 FUN_0073db00
 * calls 00502820 FUN_00502820
 * calls 006dfaf0 FUN_006dfaf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_006236c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x20;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a70c4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  param_1[7] = param_7;
  iVar2 = FUN_006dfaf0();
  if (iVar2 != 0) {
    uVar1 = param_1[2];
    iVar2 = FUN_006dfaf0();
    *(undefined4 *)(iVar2 + 0x1dc) = uVar1;
    uVar1 = param_1[3];
    iVar2 = FUN_006dfaf0();
    *(undefined4 *)(iVar2 + 0x1e0) = uVar1;
  }
  FUN_0073db00(param_1[4]);
  DAT_00915ff8 = FUN_00502820(0x93c0eaf6);
  if (DAT_00915ff8 != 0) {
    if (DAT_009204b4 == '\0') {
      DAT_009204b0 = *(undefined4 *)(DAT_00915ff8 + 0x90);
    }
    if (((float)param_1[6] < _DAT_00890968) ||
       ((float)param_1[6] < _DAT_00890d3c == ((float)param_1[6] == _DAT_00890d3c))) {
      if (DAT_009204b4 != '\0') {
        *(undefined4 *)(DAT_00915ff8 + 0x90) = DAT_009204b0;
        DAT_009204b4 = '\0';
      }
    }
    else {
      *(undefined4 *)(DAT_00915ff8 + 0x90) = param_1[6];
      DAT_009204b4 = '\x01';
    }
    if (DAT_009204ac == '\0') {
      DAT_009204a8 = *(undefined4 *)(DAT_00915ff8 + 0x80);
    }
    if ((_DAT_00890968 <= (float)param_1[7]) &&
       ((float)param_1[7] < _DAT_00890d3c != ((float)param_1[7] == _DAT_00890d3c))) {
      *(undefined4 *)(DAT_00915ff8 + 0x80) = param_1[7];
      DAT_009204ac = 1;
      ExceptionList = local_c;
      return param_1;
    }
    if (DAT_009204ac != '\0') {
      *(undefined4 *)(DAT_00915ff8 + 0x80) = DAT_009204a8;
      DAT_009204ac = '\0';
    }
  }
  ExceptionList = local_c;
  return param_1;
}

