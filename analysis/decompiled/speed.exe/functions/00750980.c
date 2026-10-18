/* speed.exe 00750980 FUN_00750980; analysis pseudocode, not buildable source.
 * calls 006bf530 FUN_006bf530
 * calls 00444fe0 FUN_00444fe0
 * calls 0074e160 FUN_0074e160
 * calls 00516e20 FUN_00516e20
 * calls 00516e10 FUN_00516e10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00750980(undefined4 param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  float local_70;
  float local_6c;
  float local_68;
  float local_5c;
  float local_58;
  undefined1 local_50 [32];
  float local_30;
  float local_2c;
  float local_28;
  
  if (DAT_00903320 != 0) {
    if (param_2 != 0) {
      FUN_00516e10();
      iVar3 = FUN_00516e20();
      if (iVar3 == 5) {
        return;
      }
    }
    FUN_006bf530();
    puVar4 = DAT_009b27ec;
    if ((undefined4 **)DAT_009b27ec != &DAT_009b27ec) {
      do {
        iVar3 = puVar4[0xc6];
        if ((iVar3 != 0) && (puVar4[0x15d] != 0)) {
          uVar2 = *(undefined4 *)(iVar3 + 0x1628);
          FUN_00444fe0(local_50,puVar4 + 0xcc);
          local_70 = (float)puVar4[200];
          local_68 = (float)puVar4[0xca];
          local_6c = (float)puVar4[0xc9];
          if (param_2 != 0) {
            local_30 = -local_30;
            local_2c = -local_2c;
            local_28 = -local_28;
            fVar1 = *(float *)(*(int *)(iVar3 + 0x17b4) + 0xf4);
            local_5c = fVar1 * local_2c;
            local_58 = fVar1 * local_28;
            local_70 = local_70 + _DAT_009053c0 + local_30 * fVar1;
            local_6c = local_6c + _DAT_009053c4 + local_5c;
            local_68 = _DAT_009053c8 + local_68 + local_58;
          }
          FUN_0074e160(param_1,&local_70,local_50,puVar4 + 0xdc,puVar4 + 0x11c,puVar4 + 0xdc,
                       param_2 != 0,0,param_2,0x3f800000,uVar2,uVar2);
        }
        puVar4 = (undefined4 *)*puVar4;
      } while ((undefined4 **)puVar4 != &DAT_009b27ec);
    }
  }
  return;
}

