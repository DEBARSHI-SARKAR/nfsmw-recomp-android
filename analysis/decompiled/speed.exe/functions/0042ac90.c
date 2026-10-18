/* speed.exe 0042ac90 FUN_0042ac90; analysis pseudocode, not buildable source.
 * calls 004292a0 FUN_004292a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042ac90(int *param_1,undefined4 param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  float unaff_retaddr;
  
  FUN_004292a0(param_2);
  (**(code **)(*param_1 + 0x50))(param_2);
  if ((char)param_1[0x1d8] != '\0') {
    iVar3 = (**(code **)(param_1[0x13] + 100))();
    if (*(char *)(iVar3 + 0x2c) != '\0') {
      fVar1 = unaff_retaddr + (float)param_1[0x1e7];
      param_1[0x1e7] = (int)fVar1;
      param_1[0x1e6] = (int)(unaff_retaddr + (float)param_1[0x1e6]);
      if (_DAT_008910f0 <= fVar1) {
        iVar3 = param_1[0x1d6];
        param_1[0x1e7] = (int)(fVar1 - _DAT_008910f0);
        uVar4 = (**(code **)(param_1[0x13] + 100))();
        cVar2 = (**(code **)(iVar3 + 0x7c))(uVar4);
        if (cVar2 != '\0') {
          param_1[0x1e6] = -0x41800000;
          return;
        }
      }
      return;
    }
  }
  param_1[0x1e6] = 0x3e800000;
  param_1[0x1e7] = 0x3e800000;
  return;
}

