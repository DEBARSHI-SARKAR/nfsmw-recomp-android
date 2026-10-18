/* speed.exe 00581790 FUN_00581790; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0051e1a0 FUN_0051e1a0
 */

char * __fastcall FUN_00581790(int param_1)

{
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008720a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051e1a0(*(undefined4 *)(param_1 + 4),0,0);
  switch(*(undefined1 *)(local_18 + 0x40)) {
  default:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "";
  case 1:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "BMW";
  case 2:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "FORD";
  case 3:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "SUBARU";
  case 4:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "PORSCHE";
  case 5:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "AUDI";
  case 6:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "MAZDA";
  case 7:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "GENERAL_MOTORS";
  case 8:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "DODGE";
  case 9:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "TOYOTA";
  case 10:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "MITSUBISHI";
  case 0xb:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "MCLAREN";
  case 0xc:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "MERCEDES";
  case 0xd:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "NISSAN";
  case 0xe:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "LOTUS";
  case 0xf:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "LAMBORGHINI";
  case 0x10:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "RENAULT";
  case 0x11:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "LEXUS";
  case 0x12:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "PONTIAC";
  case 0x13:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "CHEVROLET";
  case 0x14:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "VAUXHALL";
  case 0x15:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "ASTONMARTIN";
  case 0x16:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "VOLKSWAGEN";
  case 0x17:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "FIAT";
  case 0x18:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "CADILLAC";
  case 0x19:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return "CORVETTE";
  }
}

