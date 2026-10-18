/* speed.exe 00492130 FUN_00492130; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00492130(int param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = 0;
  cVar2 = *param_2;
  while (cVar2 != '\0') {
    pcVar1 = param_2 + 1;
    uVar3 = uVar3 ^ uVar3 << 5 ^ (int)cVar2;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  return uVar3 % *(uint *)(param_1 + 4);
}

