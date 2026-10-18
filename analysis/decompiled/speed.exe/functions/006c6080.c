/* speed.exe 006c6080 FUN_006c6080; analysis pseudocode, not buildable source.
 * calls 006c5500 FUN_006c5500
 * calls 007e7d76 D3DXCreateEffectFromResourceA
 * calls 006c5e60 FUN_006c5e60
 */

void __fastcall FUN_006c6080(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_4;
  
  piVar2 = *(int **)(param_1 + 0x48);
  puVar1 = (undefined4 *)(param_1 + 0x48);
  local_4 = param_1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x114))(piVar2);
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    *puVar1 = 0;
  }
  D3DXCreateEffectFromResourceA
            (DAT_00982bdc,0,(&PTR_s_IDI_WORLD_FX_008f9be8)[*(int *)(param_1 + 4) * 0x24],0,0,0,
             DAT_00982c84,puVar1,&local_4);
  FUN_006c5500();
  FUN_006c5e60();
  return;
}

