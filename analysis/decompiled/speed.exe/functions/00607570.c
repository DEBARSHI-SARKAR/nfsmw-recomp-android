/* speed.exe 00607570 FUN_00607570; analysis pseudocode, not buildable source.
 * calls 007cabc0 _strtod
 * calls 007ca8b0 _isspace
 */

undefined4 FUN_00607570(byte *param_1,float *param_2)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  pbVar1 = param_1;
  dVar3 = _strtod((char *)param_1,(char **)&param_1);
  if (param_1 != pbVar1) {
    iVar2 = _isspace((uint)*param_1);
    while (iVar2 != 0) {
      param_1 = param_1 + 1;
      iVar2 = _isspace((uint)*param_1);
    }
    if (*param_1 == 0) {
      *param_2 = (float)dVar3;
      return 1;
    }
  }
  return 0;
}

