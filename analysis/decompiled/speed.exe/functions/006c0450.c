/* speed.exe 006c0450 FUN_006c0450; analysis pseudocode, not buildable source.
 * calls 007c6100 _sprintf
 * calls 006c03b0 FUN_006c03b0
 * calls 007c94f0 _fclose
 * calls 007cb730 _fwrite
 * calls 00460ed0 FUN_00460ed0
 * calls EXTERNAL:000000dc SHGetFolderPathA
 * calls 006c0330 FUN_006c0330
 * calls EXTERNAL:00000026 DeleteFileA
 * calls 00652ad0 _malloc
 * calls 007c9790 _fopen
 */

void FUN_006c0450(int param_1,int *param_2,char *param_3)

{
  void *pvVar1;
  void *_Str;
  undefined1 *puVar2;
  FILE *pFVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  size_t _Count;
  uint local_208;
  char local_200 [256];
  char acStack_100 [256];
  
  _Str = _malloc(*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c) * 4);
  if (_Str != (void *)0x0) {
    local_208 = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar6 = *(uint *)(param_1 + 0x18);
      do {
        iVar5 = *param_2 * local_208 + param_2[1];
        pvVar1 = (void *)((int)_Str + uVar6 * local_208 * 4);
        uVar7 = 0;
        if (uVar6 != 0) {
          puVar2 = (undefined1 *)((int)pvVar1 + 1);
          do {
            puVar2[-1] = *(undefined1 *)(iVar5 + uVar7 * 4);
            *puVar2 = puVar2[iVar5 - (int)pvVar1];
            puVar2[1] = *(undefined1 *)(iVar5 + 2 + uVar7 * 4);
            puVar2[2] = 0xff;
            uVar6 = *(uint *)(param_1 + 0x18);
            uVar7 = uVar7 + 1;
            puVar2 = puVar2 + 4;
          } while (uVar7 < uVar6);
        }
        local_208 = local_208 + 1;
      } while (local_208 < *(uint *)(param_1 + 0x1c));
    }
    if (param_3 == (char *)0x0) {
      SHGetFolderPathA(0,0x8027,0,0,local_200);
      FUN_00460ed0(local_200,local_200,"\\nfsmw%03d.tga");
      iVar5 = 0;
      while( true ) {
        _sprintf(acStack_100,local_200,iVar5);
        iVar5 = iVar5 + 1;
        pFVar3 = _fopen(acStack_100,"rb");
        if (pFVar3 == (FILE *)0x0) break;
        _fclose(pFVar3);
      }
      param_3 = acStack_100;
    }
    pFVar3 = _fopen(param_3,"wb");
    if (pFVar3 != (FILE *)0x0) {
      FUN_006c0330(pFVar3,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      _Count = *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c);
      sVar4 = _fwrite(_Str,4,_Count,pFVar3);
      FUN_006c03b0(pFVar3);
      _fclose(pFVar3);
      if (sVar4 != _Count) {
        DeleteFileA(param_3);
      }
    }
  }
  return;
}

