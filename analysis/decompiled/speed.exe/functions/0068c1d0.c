/* speed.exe 0068c1d0 FUN_0068c1d0; analysis pseudocode, not buildable source.
 */

bool __thiscall FUN_0068c1d0(int param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
  if (cVar1 != '\0') {
    return true;
  }
  return (*(uint *)(param_1 + 0x5c) & param_2) != 0;
}

