/* speed.exe 005814e0 FUN_005814e0; analysis pseudocode, not buildable source.
 * calls 0067f800 FUN_0067f800
 */

bool __thiscall FUN_005814e0(int *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = param_1;
  while (*piVar4 != param_2) {
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 5;
    if (199 < iVar3) {
      return false;
    }
  }
  if (param_1 + iVar3 * 5 != (int *)0x0) {
    bVar1 = *(byte *)(param_1 + iVar3 * 5 + 4);
    if ((bVar1 < 0x4c) && (param_1 + (uint)bVar1 * 0x66 + 1000 != (int *)0x0)) {
      cVar2 = FUN_0067f800(param_3,param_1 + (uint)bVar1 * 0x66 + 1000 + 0x46);
      return cVar2 != '\0';
    }
  }
  return false;
}

