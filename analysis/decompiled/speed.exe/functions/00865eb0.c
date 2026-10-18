/* speed.exe 00865eb0 FUN_00865eb0; analysis pseudocode, not buildable source.
 * calls 00866960 FUN_00866960
 * calls 008670b0 FUN_008670b0
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:000000e5 waveInStart
 * calls 008668e0 FUN_008668e0
 * calls EXTERNAL:000000e6 waveInAddBuffer
 * calls EXTERNAL:000000e7 waveInGetPosition
 * calls EXTERNAL:000000ee waveInStop
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00865eb0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  HWAVEIN pHVar2;
  int iVar3;
  MMRESULT MVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  mmtime_tag local_10;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  pHVar2 = (HWAVEIN)*param_1;
  if (pHVar2 != (HWAVEIN)0x0) {
    if (param_1[0x4d8] == 1) {
      if (*(char *)(param_1 + 0x9bb) == '\0') {
        waveInStop(pHVar2);
        param_1[0x4d8] = 0;
      }
      local_10.wType = 4;
      waveInGetPosition((HWAVEIN)*param_1,&local_10,0xc);
      iVar3 = param_1[0x475];
      pHVar2 = (HWAVEIN)*param_1;
      puVar7 = param_1 + iVar3 * 0x238 + 0xd;
      puVar8 = param_1 + 0x9c4;
      for (iVar6 = 0x230; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      MVar4 = waveInAddBuffer(pHVar2,(LPWAVEHDR)(param_1 + iVar3 * 0x238 + 5),0x20);
      if (MVar4 == 0) {
        param_1[0x4d7] = param_1[0x4d7] + 0x8c0;
        param_1[0x475] = (uint)(param_1[0x475] == 0);
        uVar5 = FUN_008668e0((int)param_1 + 0x2fd9,param_1 + 0x9c4,0x460);
        if (*(char *)((int)param_1 + 0x26fd) != '\0') {
          param_1[0xbf4] = uVar5;
          *(char *)(param_1 + 0xbf6) = *(char *)(param_1 + 0xbf6) + '\x01';
          FUN_008670b0(param_1[0xcf7],&DAT_00890978,param_1 + 0xbf4);
          param_1[0x9bd] = 0;
          return;
        }
        cVar1 = *(char *)(param_1 + 0x9bf);
        *(char *)(param_1 + 0x9bf) = cVar1 + '\x01';
        (*(code *)param_1[0x9c1])((int)param_1 + 0x2fd9,uVar5,param_1[0x9c3],cVar1);
        param_1[0x9c0] = param_2;
        param_1[0x9bd] = 0;
        return;
      }
    }
    else if (*(char *)(param_1 + 0x9bb) == '\x01') {
      MVar4 = waveInStart(pHVar2);
      if (MVar4 == 0) {
        param_1[0x4d8] = 1;
      }
      waveInAddBuffer((HWAVEIN)*param_1,(LPWAVEHDR)(param_1 + 5),0x20);
      waveInAddBuffer((HWAVEIN)*param_1,(LPWAVEHDR)(param_1 + 0x23d),0x20);
      param_1[0x475] = 0;
      param_1[0x4d7] = 0;
      FUN_00866960();
      param_1[0x9bd] = 0;
    }
  }
  return;
}

