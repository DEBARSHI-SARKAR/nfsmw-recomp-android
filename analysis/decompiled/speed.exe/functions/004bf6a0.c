/* speed.exe 004bf6a0 FUN_004bf6a0; analysis pseudocode, not buildable source.
 * calls 0082d0b0 FUN_0082d0b0
 * calls 004b6600 FUN_004b6600
 * calls 00460ed0 FUN_00460ed0
 * calls 0082d460 FUN_0082d460
 */

void __thiscall FUN_004bf6a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_40 [64];
  
  if (*(char *)((&DAT_009121d8)[param_2] + 5) != '\0') {
    FUN_00460ed0(local_40,PTR_s_sound_PFData__008ee5dc,
                 *(undefined4 *)((&DAT_009121d8)[param_2] + 0x14));
    iVar1 = FUN_0082d460(*(undefined4 *)((&DAT_009121d8)[param_2] + 0x24),local_40,0x9c4);
    if (-1 < iVar1) {
      uVar2 = FUN_0082d0b0(*(undefined4 *)((&DAT_009121d8)[param_2] + 0x24),3,0);
      *(undefined4 *)(param_1 + 0x28 + param_2 * 4) = uVar2;
      if (param_2 == 0) {
        FUN_004b6600(DAT_009121d8);
      }
    }
  }
  return;
}

