/* speed.exe 007a3a10 FUN_007a3a10; analysis pseudocode, not buildable source.
 * calls 00598dd0 FUN_00598dd0
 * calls 00576f10 FUN_00576f10
 * calls 00598a60 FUN_00598a60
 * calls 0056f710 FUN_0056f710
 */

void __fastcall FUN_007a3a10(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0056f710();
  if (cVar1 != '\0') {
    iVar2 = FUN_00576f10(0x14,0);
    if (0 < iVar2) goto LAB_007a3a3d;
  }
  if (DAT_009b9e79 == '\0') {
    if (DAT_008f4314 <= (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 2)) {
      FUN_00598a60(*(undefined4 *)(param_1 + 0x14),&DAT_00890978,2,0x417b2601,0xb4edeb6d,0xbcae8539)
      ;
    }
    return;
  }
LAB_007a3a3d:
  FUN_00598dd0(*(undefined4 *)(param_1 + 0x14),&DAT_00890978,3,0x417b2601,0x1a294dad,0x8defa48b,
               0xb4edeb6d,1,0xcebda20);
  return;
}

