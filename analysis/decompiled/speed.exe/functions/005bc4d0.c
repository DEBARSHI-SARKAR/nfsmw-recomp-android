/* speed.exe 005bc4d0 FUN_005bc4d0; analysis pseudocode, not buildable source.
 * calls 005b88f0 FUN_005b88f0
 * calls 005b87e0 FUN_005b87e0
 */

bool __thiscall FUN_005bc4d0(int param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 4))
                    (param_1,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
  FUN_005b87e0();
  FUN_005b88f0();
  return cVar1 != '\0';
}

