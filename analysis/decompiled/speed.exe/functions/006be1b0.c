/* speed.exe 006be1b0 FUN_006be1b0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006be1b0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 < 0x89f23a15) {
    if (uVar1 == 0x89f23a14) {
LAB_006be25e:
      *(undefined4 *)(param_1 + 0x50) = DAT_008f91e8;
      *(undefined4 *)(param_1 + 0x54) = DAT_008f91f8;
      return;
    }
    if (uVar1 < 0x3ed70c44) {
      if (uVar1 == 0x3ed70c43) {
LAB_006be23a:
        *(undefined4 *)(param_1 + 0x50) = DAT_008f91e4;
        *(undefined4 *)(param_1 + 0x54) = DAT_008f91f4;
        return;
      }
      if (uVar1 < 0x23e6a3f5) {
        if (uVar1 != 0x23e6a3f4) {
          if (uVar1 == 0x12c9453c) goto LAB_006be23a;
          if (uVar1 != 0x2388dd82) {
            return;
          }
        }
      }
      else if (uVar1 != 0x23e6b396) {
        if (uVar1 != 0x33a26cb6) {
          return;
        }
        goto LAB_006be20c;
      }
    }
    else if (uVar1 < 0x8050ca40) {
      if (uVar1 == 0x8050ca3f) goto LAB_006be2e6;
      if (uVar1 == 0x471a1dca) goto LAB_006be23a;
      if (uVar1 != 0x6cf41096) {
        return;
      }
    }
    else if (uVar1 != 0x8062e2c0) {
      if (uVar1 != 0x89946400) {
        return;
      }
      goto LAB_006be25e;
    }
  }
  else if (uVar1 < 0x8cbe3498) {
    if (uVar1 != 0x8cbe3497) {
      if (uVar1 < 0x8cb694ee) {
        if (uVar1 != 0x8cb694ed) {
          if (uVar1 == 0x8a616c4c) goto LAB_006be2e6;
          if (uVar1 != 0x8cb61dcd) {
            return;
          }
        }
      }
      else if ((uVar1 != 0x8cb95e6b) && (uVar1 != 0x8cbc02ec)) {
        return;
      }
    }
  }
  else {
    if (0xc9d2b801 < uVar1) {
      if ((uVar1 != 0xd68ea0c1) && (uVar1 != 0xd6ec76d5)) {
        return;
      }
LAB_006be2e6:
      *(undefined4 *)(param_1 + 0x50) = DAT_008f91ec;
      *(undefined4 *)(param_1 + 0x54) = DAT_008f91fc;
      return;
    }
    if (uVar1 != 0xc9d2b801) {
      if (uVar1 == 0xa6348ee3) {
LAB_006be20c:
        *(undefined4 *)(param_1 + 0x50) = DAT_008f9204;
        *(undefined4 *)(param_1 + 0x54) = DAT_008f9208;
        return;
      }
      if (uVar1 != 0xb3645f81) {
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x50) = DAT_008f91f0;
  *(undefined4 *)(param_1 + 0x54) = DAT_008f9200;
  return;
}

