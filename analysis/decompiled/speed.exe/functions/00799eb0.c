/* speed.exe 00799eb0 FUN_00799eb0; analysis pseudocode, not buildable source.
 * calls 007ec1a7 FUN_007ec1a7
 * calls EXTERNAL:00000011 GetTickCount
 * calls 0083ccc0 FUN_0083ccc0
 * calls 0083ff00 FUN_0083ff00
 * calls 007ecc4a FUN_007ecc4a
 * calls 00794f80 FUN_00794f80
 * calls 007ecce4 FUN_007ecce4
 * calls 007ec44f FUN_007ec44f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00799eb0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_0083ccc0(&DAT_00890978);
  FUN_0083ff00();
  cVar1 = FUN_007ecc4a(&DAT_009b40b0);
  if (((cVar1 != '\0') && (cVar1 = FUN_007ecc4a(&DAT_009b40e4), cVar1 != '\0')) &&
     (cVar1 = FUN_007ec44f(&DAT_009b40ec,&LAB_007976b0,param_1,&DAT_009b5ab0,0x3800,1),
     cVar1 != '\0')) {
    FUN_007ec1a7();
    FUN_00794f80();
    _DAT_009b40d8 = GetTickCount();
    FUN_007ecce4(&LAB_0078b2e0);
    *(undefined1 *)(param_1 + 4) = 1;
    return 1;
  }
  return 0;
}

