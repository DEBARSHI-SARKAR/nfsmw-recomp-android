/* speed.exe 005a7910 FUN_005a7910; analysis pseudocode, not buildable source.
 * calls 005a2050 FUN_005a2050
 * calls 00593560 FUN_00593560
 * calls 0058af50 FUN_0058af50
 * calls 005fbe70 FUN_005fbe70
 * calls 00525220 FUN_00525220
 * calls 005a2610 FUN_005a2610
 * calls 0056dc00 FUN_0056dc00
 * calls 005a2390 FUN_005a2390
 * calls 005931b0 FUN_005931b0
 */

void __fastcall FUN_005a7910(int param_1)

{
  char cVar1;
  
  FUN_0058af50();
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0xe0) != 1) {
    if (*(int *)(param_1 + 0xe0) == 2) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d691760,0x578b767b);
      if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
        cVar1 = FUN_005fbe70();
        if (cVar1 != '\0') {
          cVar1 = FUN_0056dc00();
          if (cVar1 == '\0') {
            FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d691760,0x334fa7fb);
          }
        }
      }
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xe4),0x7448870b);
      FUN_005a2390();
      FUN_00593560(0);
      FUN_005931b0();
      return;
    }
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d691760,0xfea872d4);
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xe4),0xaeaeb62f);
    FUN_005a2610();
    FUN_00593560(0);
    FUN_005931b0();
    return;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d691760,0xfb415e78);
  if (DAT_00925e90 == 3) {
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xe4),0x7448870b);
    FUN_005a2050();
    FUN_00593560(0);
    FUN_005931b0();
    return;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xe4),0x74413352);
  if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    cVar1 = FUN_005fbe70();
    if (cVar1 != '\0') {
      cVar1 = FUN_0056dc00();
      if (cVar1 == '\0') {
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xe4),0x9145a5f2);
      }
    }
  }
  FUN_005a2050();
  FUN_00593560(0);
  FUN_005931b0();
  return;
}

