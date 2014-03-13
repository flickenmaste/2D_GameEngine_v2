// Will Gilstrap - Game Engine
// 3/13/2014

#ifndef __SPRITE_H__
#define __SPRITE_H__

#include <SOIL.h>
#include <Entity.h>
#include <tinyxml2.h>
#include <vector>



class Sprite: public Entity
{
public:
	Sprite(void);
	~Sprite(void);
	Sprite( const char* a_pTexture, int a_iWidth, int a_iHeight, Vector4 a_v4Color,GLFWwindow* );
	
	virtual void Draw();
	void Input();

	void SetPosition(Vector3 a_v3Pos);
	void SetPosition(float a_fX, float a_fY);
	Vector3 GetPosition();
	void SetScale(Vector2 a_v2Scale);
	void SetScale(float a_fScale);
	void SetScale(float a_fScaleX,float a_fScaleY);
	Vector2 GetScale();
	void SetVertexData( Vertex* a_vertexData );
	const Vertex* GetVertexData() const;


protected:

	Vector2 m_v2Scale;
	Vector3 m_v3Position;
	Vector4 m_v4SpriteColor;
};



inline void	Sprite::SetVertexData( Vertex* a_vertexData )
{
	memcpy( &m_aoVerts, a_vertexData, sizeof(Vertex) * 4 );
}

inline const Vertex* Sprite::GetVertexData() const
{
	return static_cast<const Vertex*>( m_aoVerts );
}


#endif
