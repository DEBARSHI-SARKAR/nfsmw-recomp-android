/* speed.exe 007fdff9 FUN_007fdff9; analysis pseudocode, not buildable source.
 * calls 007fdf1a FUN_007fdf1a
 * calls 007fc5f5 FUN_007fc5f5
 */

undefined4 FUN_007fdff9(int *param_1)

{
  int iVar1;
  
  FUN_007fdf1a(param_1);
  iVar1 = FUN_007fc5f5(800,0);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    FUN_007fdf1a(param_1);
  }
  else {
    param_1[1] = iVar1 + 0x1fU & 0xffffffe0;
    iVar1 = FUN_007fc5f5((param_1[0x7e] + 10) * 0x10,0);
    param_1[0x46] = iVar1;
    if (iVar1 != 0) {
      param_1[0x43] = iVar1 + 0x1fU & 0xffffffe0;
      iVar1 = FUN_007fc5f5((((uint)param_1[0x7e] >> 1) + 10) * 0x10,0);
      param_1[0x47] = iVar1;
      if (iVar1 != 0) {
        param_1[0x44] = iVar1 + 0x1fU & 0xffffffe0;
        iVar1 = FUN_007fc5f5((((uint)param_1[0x7e] >> 1) + 10) * 0x10,0);
        param_1[0x48] = iVar1;
        if (iVar1 != 0) {
          param_1[0x45] = iVar1 + 0x1fU & 0xffffffe0;
          iVar1 = FUN_007fc5f5(param_1[0x8a] + 0x20,0);
          param_1[0x1bf] = iVar1;
          if (iVar1 != 0) {
            param_1[0x1bc] = iVar1 + 0x1fU & 0xffffffe0;
            iVar1 = FUN_007fc5f5(param_1[0x8a] + 0x20,0);
            param_1[0x1c0] = iVar1;
            if (iVar1 != 0) {
              param_1[0x1bd] = iVar1 + 0x1fU & 0xffffffe0;
              iVar1 = FUN_007fc5f5(param_1[0x8a] * 4 + 0x20,0);
              param_1[0x1c1] = iVar1;
              if (iVar1 != 0) {
                param_1[0x1be] = iVar1 + 0x1fU & 0xffffffe0;
                iVar1 = FUN_007fc5f5(param_1[0x7f] * 4 + 0x20,0);
                param_1[0x53] = iVar1;
                if (iVar1 != 0) {
                  param_1[0x52] = iVar1 + 0x1fU & 0xffffffe0;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    FUN_007fdf1a(param_1);
  }
  return 0;
}

