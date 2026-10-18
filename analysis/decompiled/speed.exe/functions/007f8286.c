/* speed.exe 007f8286 FUN_007f8286; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000e9 timeGetTime
 */

void __fastcall FUN_007f8286(DWORD *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  
  DVar3 = timeGetTime();
  uVar4 = DVar3 - *param_1;
  if (param_1[4] == 0x1000) {
    puVar1 = param_1 + 2;
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    param_1[3] = param_1[3] + (uint)CARRY4(uVar5,uVar4);
  }
  else {
    uVar2 = (ulonglong)uVar4 * (ulonglong)param_1[4] >> 0xc;
    uVar5 = (uint)uVar2;
    puVar1 = param_1 + 2;
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + uVar5;
    param_1[3] = param_1[3] + (int)(uVar2 >> 0x20) + (uint)CARRY4(uVar4,uVar5);
  }
  *param_1 = DVar3;
  return;
}

