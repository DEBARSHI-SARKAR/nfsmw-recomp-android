/* speed.exe 00458810 FUN_00458810; analysis pseudocode, not buildable source.
 * calls 00457aa0 FUN_00457aa0
 */

undefined4 __thiscall FUN_00458810(ushort *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 <= *param_1) {
    if (param_1[2] == 0) {
      for (uVar1 = (uint)param_1[1]; uVar1 < param_2; uVar1 = uVar1 + 1) {
        FUN_00457aa0(uVar1,0);
      }
    }
    param_1[1] = (ushort)param_2;
    return 1;
  }
  return 0;
}

