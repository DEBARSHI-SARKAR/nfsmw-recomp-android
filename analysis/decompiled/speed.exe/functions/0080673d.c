/* speed.exe 0080673d FUN_0080673d; analysis pseudocode, not buildable source.
 * calls 008066bb FUN_008066bb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0080673d(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  FUN_008066bb(&local_c,local_10,&local_8);
  if (local_8 == 0) {
    if (local_c == 0) {
      puVar2 = &DAT_009c6960;
      do {
        if ((int)puVar2 < 0x9c6965) {
          *puVar2 = FUN_0081785e;
        }
        else if ((int)puVar2 < 0x9c6989) {
          *puVar2 = FUN_008175a4;
        }
        else {
          *puVar2 = FUN_0081712f;
        }
        puVar2 = puVar2 + 1;
      } while ((int)puVar2 < 0x9c6a61);
      puVar2 = &DAT_009c6840;
      do {
        if ((int)puVar2 < 0x9c6845) {
          *puVar2 = FUN_0081785e;
        }
        else if ((int)puVar2 < 0x9c6869) {
          *puVar2 = FUN_008175a4;
        }
        else {
          *puVar2 = FUN_0081712f;
        }
        puVar2 = puVar2 + 1;
      } while ((int)puVar2 < 0x9c6941);
      DAT_009c6810 = &DAT_007fd579;
      DAT_009c6a6c = FUN_00816ac6;
      DAT_009c6a64 = FUN_00816b52;
      _DAT_009c6820 = FUN_00816bee;
      _DAT_009c6814 = FUN_007fd57a;
      DAT_009c6818 = FUN_007fd61e;
      DAT_009c6a68 = FUN_00816cd4;
      _DAT_009c6824 = FUN_007fd67d;
      DAT_009c680c = FUN_007fd6fb;
      _DAT_009c6800 = FUN_007fdceb;
      DAT_009c681c = FUN_007fdae8;
    }
    else {
      uVar1 = 0;
      do {
        if (uVar1 < 5) {
          *(code **)((int)&DAT_009c6960 + uVar1) = FUN_008158f9;
        }
        else if (uVar1 < 0x29) {
          *(undefined1 **)((int)&DAT_009c6960 + uVar1) = &LAB_0081523d;
        }
        else {
          *(undefined1 **)((int)&DAT_009c6960 + uVar1) = &LAB_008148f7;
        }
        uVar1 = uVar1 + 4;
      } while (uVar1 < 0x101);
      uVar1 = 0;
      do {
        if (uVar1 < 5) {
          *(code **)((int)&DAT_009c6840 + uVar1) = FUN_008158f9;
        }
        else if (uVar1 < 0x29) {
          *(undefined1 **)((int)&DAT_009c6840 + uVar1) = &LAB_0081603f;
        }
        else {
          *(undefined1 **)((int)&DAT_009c6840 + uVar1) = &LAB_0081594e;
        }
        uVar1 = uVar1 + 4;
      } while (uVar1 < 0x101);
      DAT_009c6a6c = FUN_0081801f;
      DAT_009c6a64 = FUN_00818056;
      _DAT_009c6820 = FUN_008180a1;
      DAT_009c6810 = &LAB_0081681d;
      _DAT_009c6814 = FUN_008168b1;
      DAT_009c6818 = FUN_00816905;
      DAT_009c6a68 = FUN_0081697c;
      _DAT_009c6824 = FUN_0081693a;
      DAT_009c680c = FUN_00816820;
      _DAT_009c6800 = FUN_00817cc0;
      DAT_009c681c = FUN_00817db4;
    }
  }
  else {
    uVar1 = 0;
    do {
      if (uVar1 < 5) {
        *(code **)((int)&DAT_009c6840 + uVar1) = FUN_008191c8;
      }
      else if (uVar1 < 0x29) {
        *(code **)((int)&DAT_009c6840 + uVar1) = FUN_00818dc7;
      }
      else {
        *(code **)((int)&DAT_009c6840 + uVar1) = FUN_008188ce;
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x101);
    uVar1 = 0;
    do {
      if (uVar1 < 5) {
        *(code **)((int)&DAT_009c6960 + uVar1) = FUN_008191c8;
      }
      else if (uVar1 < 0x29) {
        *(undefined1 **)((int)&DAT_009c6960 + uVar1) = &LAB_0081523d;
      }
      else {
        *(undefined1 **)((int)&DAT_009c6960 + uVar1) = &LAB_008148f7;
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x101);
    DAT_009c6a6c = FUN_008187ec;
    DAT_009c6a64 = FUN_0081882a;
    _DAT_009c6820 = FUN_0081886f;
    DAT_009c6810 = &LAB_0081681d;
    _DAT_009c6814 = FUN_008168b1;
    DAT_009c6818 = FUN_00816905;
    DAT_009c6a68 = FUN_0081697c;
    _DAT_009c6824 = FUN_0081693a;
    DAT_009c680c = FUN_00816820;
    _DAT_009c6800 = FUN_00818542;
    DAT_009c681c = FUN_00818638;
  }
  DAT_009c6808 = FUN_00816888;
  return;
}

