/* speed.exe 0042fa40 FUN_0042fa40; analysis pseudocode, not buildable source.
 * calls 00419fc0 FUN_00419fc0
 * calls 00627320 FUN_00627320
 * calls 006ed200 FUN_006ed200
 * calls 0076e220 FUN_0076e220
 * calls 00777ab0 FUN_00777ab0
 * calls 0077b9e0 FUN_0077b9e0
 * calls 00419f40 FUN_00419f40
 * calls 0042bfe0 FUN_0042bfe0
 */

undefined4 FUN_0042fa40(short *param_1,char *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  char local_2a4;
  undefined4 local_27c;
  undefined4 local_274;
  char local_268;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008683cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042bfe0();
  iVar2 = DAT_0090d644;
  if (0 < DAT_0090d644) {
    FUN_006ed200();
    iVar4 = FUN_00627320();
    sVar1 = *(short *)(&DAT_0090d520 + (iVar4 * iVar2 >> 0x10));
    *param_1 = sVar1;
    if ((-1 < sVar1) && (*(short *)(sVar1 * 0x16 + 6 + DAT_009b38c0) != -1)) {
      cVar3 = FUN_00419f40(param_1,param_2,param_3);
      if (cVar3 != '\0') {
        FUN_0077b9e0();
        local_27c = 1;
        local_274 = 1;
        local_4 = 0;
        FUN_00777ab0(*param_1,*param_2,*param_3);
        local_2fc = local_258;
        local_300 = local_25c;
        local_2f8 = local_254;
        if ((local_2a4 != '\0') &&
           (cVar3 = FUN_00419fc0(&local_300,1,(int)*param_2,(int)local_268,1), cVar3 != '\0')) {
          local_4 = 0xffffffff;
          FUN_0076e220();
          ExceptionList = local_c;
          return 1;
        }
        local_4 = 0xffffffff;
        FUN_0076e220();
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  ExceptionList = local_c;
  return 0;
}

