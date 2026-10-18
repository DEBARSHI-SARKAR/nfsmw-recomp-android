/* speed.exe 006039c0 FUN_006039c0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00465a70 FUN_00465a70
 * calls 00455bc0 FUN_00455bc0
 * calls 005eb640 FUN_005eb640
 * calls 00603970 FUN_00603970
 * calls 00600b20 FUN_00600b20
 */

int * __fastcall FUN_006039c0(int *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar1 = FUN_00455bc0(0x5cea9d46);
  param_1[10] = iVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  iVar1 = FUN_005eb640(0);
  param_1[8] = iVar1;
  pvVar2 = _malloc(iVar1 * 0x1c);
  param_1[9] = (int)pvVar2;
  FUN_005eb640(pvVar2);
  FUN_00603970();
  iVar1 = FUN_00465a70(*param_1 << 4,0x800);
  param_1[0xf] = iVar1;
  FUN_00600b20();
  return param_1;
}

