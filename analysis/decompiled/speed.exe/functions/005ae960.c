/* speed.exe 005ae960 FUN_005ae960; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005ae960(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = param_1[1];
  param_1[1] = param_2;
  *param_1 = uVar1;
  iVar2 = 0;
  puVar3 = param_1 + 2;
  do {
    uVar1 = 1 << ((byte)iVar2 & 0x1f);
    if ((param_1[1] & uVar1) != 0) {
      if ((*param_1 & uVar1) == 0) {
        *puVar3 = 0;
      }
      else {
        *puVar3 = *puVar3 + param_3;
      }
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x20);
  return;
}

