#pragma once
#include <d3d9.h>
#include <d3dx9.h>

// 선언	
#define WIN_WIDTH		800
#define WIN_HEIGHT		600	
#define PI				3.14159265f
#define FOV				(PI/4.0f)						// 시야각
#define ASPECT_RATIO	(WIN_WIDTH/(float)WIN_HEIGHT)	// 화면의 종횡비
#define NEAR_PLANE		1								// 근접 평면
#define FAR_PLANE		10000							// 원거리 평면

// 메세지 처리기 관련
LRESULT WINAPI MsgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
void ProcessInput(HWND hWnd, WPARAM keyPress);

// 초기화 관련
bool InitEverything(HWND hWND);
bool InitD3D(HWND hWnd);
bool LoadAssets();
LPD3DXEFFECT LoadShader(const char * filename);
LPDIRECT3DTEXTURE9 LoadTexture(const char * filename);
LPD3DXMESH LoadModel(const char * filename);

// 게임루프 관련
void PlayDemo();
void Update();

// 렌더링 관련
void RenderFrame();
void RenderScene();
void RenderInfo();

// 뒷정리 관련
void Cleanup();
