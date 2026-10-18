/* speed.exe 007eb5e0 FUN_007eb5e0; analysis pseudocode, not buildable source.
 * calls 007e9b30 FUN_007e9b30
 * calls 007ea560 FUN_007ea560
 * calls 007ea1f0 FUN_007ea1f0
 * calls 007c6100 _sprintf
 */

void __thiscall FUN_007eb5e0(int param_1,uint *param_2)

{
  char *_Dest;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_c8 [192];
  int local_8;
  
  local_8 = param_1;
  FUN_007e9b30();
  FUN_007ea560(local_c8);
  FUN_007ea1f0(local_c8);
  *param_2 = *param_2 & 0xfffffbff;
  uVar2 = *(uint *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(param_1 + *(int *)(param_1 + 8));
  }
  if (param_2[2] == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(param_2[2] + (int)param_2);
  }
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if (0x14 < *(int *)(local_8 + 0xc) + 0x10) {
    _Dest = (char *)param_2[2];
    if (_Dest != (char *)0x0) {
      _Dest = _Dest + (int)param_2;
    }
    _sprintf(_Dest,"EAGL%d",param_2[3]);
  }
  return;
}

