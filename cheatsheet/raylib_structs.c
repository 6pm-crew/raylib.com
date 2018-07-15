
    struct Color;           // Color type, RGBA (32bit)
    struct Rectangle;       // Rectangle type
    struct Vector2;         // Vector2 type
    struct Vector3;         // Vector3 type
    struct Vector4;         // Vector4 type
    struct Quaternion;      // Quaternion type
    struct Matrix;          // Matrix type (OpenGL style 4x4)
    
    struct Image;           // Image type (multiple data formats supported)
                            // NOTE: Data stored in CPU memory (RAM)               
    struct Texture;         // Texture type (multiple internal formats supported)
                            // NOTE: Data stored in GPU memory (VRAM)
    struct RenderTexture;   // RenderTexture type, for texture rendering
    struct CharInfo;        // Font character info
    struct Font;            // Font type, includes texture and chars data
    
    struct Camera;          // Camera type, defines 3d camera position/orientation
    struct Camera2D;        // Camera2D type, defines a 2d camera
    struct Mesh;            // Vertex data definning a mesh
    struct Shader;          // Shader type (generic shader)
    struct MaterialMap;     // Material texture map
    struct Material;        // Material type
    struct Model;           // Basic 3d Model type
    struct Ray;             // Ray type (useful for raycast)
    struct RayHitInfo;      // Raycast hit information
    
    struct Wave;            // Wave type, defines audio wave data
    struct Sound;           // Basic Sound source and buffer
    struct Music;           // Music type (file streaming from memory)
    struct AudioStream;     // Raw audio stream type
    
