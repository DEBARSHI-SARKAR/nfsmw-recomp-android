/* speed.exe 006c0910 FUN_006c0910; analysis pseudocode, not buildable source.
 * calls 0065f7a0 FUN_0065f7a0
 * calls 004647c0 FUN_004647c0
 * calls 006c05e0 FUN_006c05e0
 */

void FUN_006c0910(void)

{
  int iVar1;
  undefined1 local_80 [128];
  
  if (DAT_00982bb8 == 2) {
    if (DAT_008f934c < 1) {
      DAT_008f934c = 1;
    }
    if (DAT_008f9350 < 1) {
      DAT_008f9350 = 1;
    }
    DAT_00982bb0 = DAT_00982bb0 + -1;
    if (DAT_00982bb0 < 1) {
      DAT_008f9354 = DAT_008f9354 + 1;
      DAT_00982bb0 = DAT_008f9350;
      FUN_004647c0(local_80,"StreamAnim%06d.tga",DAT_008f9354);
      FUN_006c05e0(local_80);
    }
    if (DAT_008f9354 == DAT_008f934c + -1) {
      DAT_00982bc0 = 0;
    }
  }
  else {
    DAT_008f9354 = -1;
    DAT_00982bb0 = 0;
  }
  if (DAT_00982bb8 == 1) {
    do {
      FUN_004647c0(local_80,"Screenshot%03d.tga",DAT_00982bb4);
      DAT_00982bb4 = DAT_00982bb4 + 1;
      iVar1 = FUN_0065f7a0(local_80);
    } while (iVar1 != 0);
    FUN_006c05e0(local_80);
    DAT_00982bbc = 0;
  }
  return;
}

